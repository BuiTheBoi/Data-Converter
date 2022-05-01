// Any variables used globally throughout files can be used here!

#ifndef ACCESSORIES_H
#define ACCESSORIES_H

#include <map>


// Mapping menu choices with the bases:
std::map<int, int> my_dictionary = {
    {1, 10},    // [1] Decimal (Base 10)
    {2, 2},     // [2] Binary (Base 2)
    {3, 8},     // [3] Octal (Base 8)
    {4, 16}     // [4] Hexadecimal (Base 16)
};

// ANSI Escape Codes
// Insert into STD_OUT to format text with color, bold, etc.
// https://en.wikipedia.org/wiki/ANSI_escape_code
#define ANSI_RESET "\u001b[0m"
#define ANSI_RED "\u001b[31m"
#define ANSI_GREEN "\u001b[32m"
#define ANSI_YELLOW "\u001b[33m"
#define ANSI_BLUE "\u001b[34m"
#define ANSI_MAGENTA "\u001b[35m"
#define ANSI_CYAN "\u001b[36m"
#define ANSI_WHITE "\u001b[37m"
#define ANSI_GRAY "\u001b[38;5;250m"
#define ANSI_BRIGHT_RED "\u001b[31;1m"
#define ANSI_BRIGHT_GREEN "\u001b[38;5;10m"
#define ANSI_BRIGHT_YELLOW "\u001b[33;1m"
#define ANSI_BRIGHT_BLUE "\u001b[34;1m"
#define ANSI_BRIGHT_MAGENTA "\u001b[35;1m"
#define ANSI_BRIGHT_CYAN "\u001b[36;1m"
#define ANSI_BRIGHT_WHITE "\u001b[37;1m"
#define ANSI_HIGHLIGHT_RED "\u001b[41m"
#define ANSI_HIGHLIGHT_DULL_RED "\u001b[48;5;88m"
#define ANSI_HIGHLIGHT_GREEN "\u001b[42m"
#define ANSI_HIGHLIGHT_DULL_GREEN "\u001b[48;5;22m"
#define ANSI_HIGHLIGHT_YELLOW "\u001b[43m"
#define ANSI_HIGHLIGHT_BLUE "\u001b[44m"
#define ANSI_HIGHLIGHT_MAGENTA "\u001b[45m"
#define ANSI_HIGHLIGHT_CYAN "\u001b[46m"
#define ANSI_HIGHLIGHT_WHITE "\u001b[47m"
#define ANSI_BOLD "\u001b[1m"
#define ANSI_UNDERLINE "\u001b[4m"
#define ANSI_REVERSE "\u001b[7m"


#endif