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

// Converts binary, hexadecimal, octal to another binary, hexadecimal, octal
string baseToBase(int input_base, string input_str, int output_base);

#endif