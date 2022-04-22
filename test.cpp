#include <iostream>
#include <string>
#include <cctype>

using namespace std;

#include "functions.h"
#include "accessories.h"


int total_cases = 0, cases_passed = 0;

void BASE_DECIMAL_TEST(int base, string num, int expected)
{
    total_cases += 1;
    if (baseToDecimal(base, num) == expected)
    {
        cases_passed += 1;
        cout << "PASSED: ";
    }
    else
    {
        cout << "FAILED: ";
    }
    cout << "Base " << base << " value of " << num << endl;
    cout << "\t" << "(Your value: " << baseToDecimal(base, num) << ". Expected: " << expected << ")" << endl;
}

int main()
{
    {   // Testing baseToDecimal() algorithms
        BASE_DECIMAL_TEST(16, "FD", 253);
        BASE_DECIMAL_TEST(16, "ABFCC", 704460);
        BASE_DECIMAL_TEST(2, "101011", 43);
        BASE_DECIMAL_TEST(2, "1111", 15);
        BASE_DECIMAL_TEST(8, "12723", 5587);
        BASE_DECIMAL_TEST(8, "77777", 32767);
    }


    cout << "\n\n" << cases_passed << " of " << total_cases << " CASES PASSED." << endl;
    return 0;
}