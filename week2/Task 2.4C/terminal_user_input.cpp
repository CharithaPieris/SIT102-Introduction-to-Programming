#include "splashkit.h"

//String promp
string read_string ( string prompt )
{
    string result;
    write(prompt);
    result = read_line();
    return result;
}

//Integer prompt
int read_integer ( string prompt )
{
    string line;
    int result;
    line = read_string(prompt);
    result = convert_to_integer(line);
    return result;
}

//Double prompt
double read_double ( string prompt )
{
    string line;
    int result;
    line = read_string(prompt);
    result = convert_to_integer(line);
    return result;
}