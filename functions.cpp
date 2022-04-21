#include "functions.h"

using namespace std;

string convertAllCaps(string val)
{
    return "string";
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