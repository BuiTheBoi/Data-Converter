// To compile: g++ -std=c++17 main.cpp functions.cpp
// To run: ./a.out

// Base to decimal
// Decimal to base
// Base to base

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

#include "functions.h"
#include "accessories.h"

int main()
{
    cout << "WELCOME TO THE DATA CONVERTER" << endl;
    cout << "--------------------------------" << endl;

    char continueProgram = 'Y';

    while (toupper(continueProgram) == 'Y')
    {
        // ================================ TAKING IN INPUT ================================
        int input_choice;
        cout << "[1] Decimal (Base 10)\n[2] Binary (Base 2)\n[3] Octal (Base 8)\n[4] Hexadecimal (Base 16)\n";
        cout << "Please pick your input type: ";

        cin >> input_choice;
        cin.ignore();

        string base_str;
        int decimal;

        if (input_choice == 1)
        {
            // Decimal to any base
            cout << "Input a decimal: ";
            cin >> decimal;
        }
        else
        {
            // Any base to decimal
            if (input_choice == 2)
            {
                cout << "Input a binary string: ";
            }
            else if (input_choice == 3)
            {
                cout << "Input an octal string: ";
            }
            else // if input_choice == 4
            {
                cout << "Input a hexadecimal string: ";
            }
            getline(cin, base_str);
        }
        

        // system("clear");


        // ================================ TAKING IN OUTPUT ================================
        int output_choice;
        
        cout << "Please pick what output type you want to convert your input to: ";
        cin >> output_choice;

        cout << "Base " << my_dictionary[input_choice] << " converted to base " << my_dictionary[output_choice] << ": ";
        if (input_choice == output_choice)
        {
            // Case: If user wants input type to be the same as output type,
            /// no processing is needed! We can just output the result
            cout << (input_choice == 1 ? to_string(decimal) : base_str);
            cout << endl;
        }
        else if(input_choice == 1)
        {
            // Case: Input is an INT, therefore use decimalToBase() (See functions.h)
            // to convert the decimal to either bin, octal, or hex
            cout << decimalToBase(my_dictionary[output_choice], decimal) << endl;
        }
        else
        {
            if (output_choice == 1)
            {
                // Case: Input is a STRING (When user picks another base instead of decimal), and we wnat to convert this
                // string (bin, oct, hex) into a decimal. We will therefore use baseToDecimal()
                cout << baseToDecimal(my_dictionary[input_choice], base_str) << endl;
            }
            else
            {
                // Case: Input is a STRING (When user picks another base instead of decimal), BUT this time we want to 
                // convert this to another STRING of another base (Ex: hex -> octal, octal -> bin, bin -> hex, etc....).
                // We wil therefore use baseToBase()
                cout << baseToBase(my_dictionary[input_choice], base_str, my_dictionary[output_choice]) << endl;
            }
        }

        cout << "Do you want to continue this program? (y/n) ";
        cin >> continueProgram;
        system("clear");
    }

    cout << "Have a great day!" << endl;
    
    return 0;
}