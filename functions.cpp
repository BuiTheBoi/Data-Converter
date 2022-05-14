#include "functions.h"

#include <string>

using namespace std;

string convertAllCaps(string val)
{
    int n=val.length();
    string caps;
    for(int i = 0; i < n; i++)
    {
        char ch = val[i];
        if ((ch > 'a' && ch <'z'))
        {
            caps += toupper(ch);
        }
        else
        {
            caps += ch;
        }
    }
    return caps;
}
/* Iterates through the string until it finds something which is not 0-9, or A-F
    Note: In its current form, it allows lowercase too. To change this, just erase
          the conditions after hex.at(i) > 70                                   */
bool isHex(string hex)
{
    for(int i = 0; i < hex.length(); i++)
    {
      if (hex.at(i) < 48 || (hex.at(i) > 57 && hex.at(i) < 65)
          || (hex.at(i) > 70 && hex.at(i) < 97) || hex.at(i) > 102)
      {
        return false;
      }
    }
    return true;
}

// Iterates through the string until it finds a char that is not 1 or 0
bool isBinary(string bin)
{
    for(int i = 0; i < bin.length(); i++)
    {
      if(bin.at(i) != '0' && bin.at(i) != '1')
      {
        return false;
      }
    }
    return true;
}

// Iterates through the string until it finds a char that is not 0-7
bool isOctal(string oct)
{
  for(int i = 0; i < oct.length(); i++)
  {
    if (oct.at(i) < 48 || oct.at(i) > 55)
    {
      return false;
    }
  }
    return true;
}

int baseToDecimal(int base, string num)
{

    int sum = 0, charToInt, lastIndex = num.size() - 1;

    int reverseIndex = 0;
    for (string::reverse_iterator rit = num.rbegin(); rit != num.rend(); ++rit)
    {
        switch(*rit)
        {
            case 'A':
                charToInt = 10;
                break;
            case 'B':
                charToInt = 11;
                break;
            case 'C':
                charToInt = 12;
                break;
            case 'D':
                charToInt = 13;
                break;
            case 'E':
                charToInt = 14;
                break;
            case 'F':
                charToInt = 15;
                break;
            default:
                charToInt = (int)*rit - 48;
        }
        sum += pow(base, reverseIndex) * charToInt;
        reverseIndex++;
    }


    return sum;
}

string decimalToBase(int base, int num)
{
    int quotient, remainder;
    string result, substr;

    while (quotient != 0)
    {
        quotient = num / base;
        remainder = num % base;

        switch(remainder)
        {
            case 10:
                substr = "A";
                break;
            case 11:
                substr = "B";
                break;
            case 12:
                substr = "C";
                break;
            case 13:
                substr = "D";
                break;
            case 14:
                substr = "E";
                break;
            case 15:
                substr = "F";
                break;
            default:
                substr = to_string(remainder);

        }
        result.insert(0, substr); // Inserting towards the beginning

        num = quotient;
    }

    return result;
}

string baseToBase(int input_base, string input_str, int output_base)
{
    return decimalToBase(output_base, baseToDecimal(input_base, input_str));
}
