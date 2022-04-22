#include "functions.h"
#include <string>

using namespace std;

string convertAllCaps(string val)
{
    int n=val.length();
    string result;
    for(int i = 0; i < n; i++)
    {
        char ch = val[i];
        if ((ch > 'a' && ch <'z'))
        {
            result += toupper(ch);
        }
        else
        {
            result += ch;
        }
    } 
    return result;
}

bool isHex(string hex)
{
    int n = hex.length();
    for(int i = 0; i < n; i++)
    {
        char ch = hex[i];
        if ((ch < '0' || ch > '9') && (ch < 'A' || ch > 'F'))
        {
            return false;
        }
    } 
    return true;
}

bool isBinary(string bin)
{
    int n = bin.length();
    for(int i = 0; i < n; i++)
    {
        char ch = bin[i];
        if (ch != 0 || ch != 1) return false;
    }
    return true;
}

bool isOctal(string oct)
{
    int n = oct.length();
    for(int i = 0; i < n; i++)
    {
        char ch = oct[i];
        if (ch < '0' || ch > '7') return false;
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