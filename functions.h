#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

// TODO: Hexademicals require letters like ABCDEF. However, in case if the user
// input lowercase letters, we want to implement and call this function to convert any lowercase
// letter to upper case to prevent any capitalization errors with hex conversions.
string convertAllCaps(string val);

// TODO: Implement and call this function to validate if the user inputted
// a proper hex value (Legal characters are exclusively 1, 2, ...., 9, A, B, C, ... F)
bool isHex(string hex);

// TODO: Implement and call this function to validate if the user inputted
// a proper binary value (Legal characters are exclusively 0's and 1's)
bool isBinary(string bin);

// TODO: Implement and call this function to validate if the user inputted
// a proper hex value (Legal characters are exclusively numbesr 1 - 7)
bool isOctal(string octal);

// Converts all 'base numbers' (Which I will consider to be binary, octal
// and hex) to some decimal number.
int baseToDecimal(int base, string num);

// Converts all decimal numbers to 'base numbers' (Which I will consider to be binary, octal
// and hex).
string decimalToBase(int base, int num);

// Converts binary, hexadecimal, octal to another binary, hexadecimal, octal
string baseToBase(int input_base, string input_str, int output_base);

#endif