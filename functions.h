#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;


string convertAllCaps(string val);

// Converts all 'base numbers' (Which I will consider to be binary, octal
// and hex) to some decimal number.
int baseToDecimal(int base, string num);

// Converts all decimal numbers to 'base numbers' (Which I will consider to be binary, octal
// and hex).
string decimalToBase(int base, int num);

// bin/hex = decimalToBase(19, baseToDecimal(2, "10101001"))

#endif