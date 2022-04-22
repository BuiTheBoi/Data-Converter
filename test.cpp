#include <iostream>
#include <string>
#include <cctype>

using namespace std;

#include "functions.h"
#include "accessories.h"


int totalCases = 0, casesPassed = 0;

void BASE_TO_DECIMAL_TEST(int base, string num, int expected)
{
    totalCases += 1;
    int myOutput = baseToDecimal(base, num);
    if (myOutput == expected)
    {
        casesPassed += 1;
        cout << "PASSED: ";
    }
    else
    {
        cout << "FAILED: ";
    }
    cout << "Base " << base << " value of " << num << " converted to decimal." << endl;
    cout << "\t" << "(Your value: " << myOutput << ". Expected: " << expected << ")" << endl;
}

void DECIMAL_TO_BASE_TEST(int base, int num, string expected)
{
    totalCases += 1;
    string myOutput = decimalToBase(base, num);
    if (myOutput == expected)
    {
        casesPassed += 1;
        cout << "PASSED: ";
    }
    else
    {
        cout << "FAILED: ";
    }
    cout << "Decimal " << num << " converted to base " << base << endl;
    cout << "\t" << "(Your value: " << myOutput << ". Expected: " << expected << ")" << endl;
}

void BASE_TO_BASE_TEST(int input_base, string input_str, int output_base, string expected)
{
    totalCases += 1;
    string myOutput = baseToBase(input_base, input_str, output_base);
    if (myOutput == expected)
    {
        casesPassed += 1;
        cout << "PASSED: ";
    }
    else
    {
        cout << "FAILED: ";
    }
    cout << "Base " << input_base << " value of " << input_str << " converted to another base." << endl;
    cout << "\t" << "(Your value: " << myOutput << ". Expected: " << expected << ")" << endl;
}

int main()
{
    {   // Testing baseToDecimal() algorithms
        BASE_TO_DECIMAL_TEST(16, "FD", 253);
        BASE_TO_DECIMAL_TEST(16, "ABFCC", 704460);
        BASE_TO_DECIMAL_TEST(2, "101011", 43);
        BASE_TO_DECIMAL_TEST(2, "1111", 15);
        BASE_TO_DECIMAL_TEST(8, "12723", 5587);
        BASE_TO_DECIMAL_TEST(8, "77777", 32767);
    }
    {   // Testing decimalToBase() algorithms
        DECIMAL_TO_BASE_TEST(2, 225, "11100001");
        DECIMAL_TO_BASE_TEST(2, 192, "11000000");
        DECIMAL_TO_BASE_TEST(8, 101, "145");
        DECIMAL_TO_BASE_TEST(8, 3355, "6433");
        DECIMAL_TO_BASE_TEST(16, 595, "253");
        DECIMAL_TO_BASE_TEST(16, 12345, "3039");
    }
    {   // Testing baseToBase() algorithms
        BASE_TO_BASE_TEST(8, "213", 2, "10001011");
        BASE_TO_BASE_TEST(8, "77777", 2, "111111111111111");
        BASE_TO_BASE_TEST(2, "10110111", 8, "267");
        BASE_TO_BASE_TEST(2, "111111111111111", 8, "77777");
        BASE_TO_BASE_TEST(16, "4ABF39", 2, "10010101011111100111001");
    }

    cout << "\n" << casesPassed << " of " << totalCases << " CASES PASSED." << endl;
    return 0;
}