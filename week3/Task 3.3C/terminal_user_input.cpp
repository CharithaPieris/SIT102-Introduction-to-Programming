#include "splashkit.h"
using namespace std;

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

    while(not is_integer(line))
    {
        write_line("Please enter a whole number.");
        line=read_string(prompt);
    }

    result = convert_to_integer(line);
    return result;
}

//Double prompt
double read_double ( string prompt )
{
    string line;
    double result;
    line = read_string(prompt);

    while(not is_double(line))
    {
        write_line("Please enter a valied number.");
        line=read_string(prompt);
    }

    result = convert_to_double(line);
    return result;
}


int read_integer ( string prompt, int min, int max)
{
    int result;

    result = read_integer(prompt);

    while (result < min or result > max)
    {
        write_line ("Please enter a number between " + to_string(min) + " and " + to_string(max));
    
        result = read_integer(prompt);
    }
    
    return result;
}

double read_double_range( string prompt, double min, double max )
{
    double result;

    result = read_double(prompt);

    while (result < min or result > max)
    {
        write_line ("Please enter a number between " + to_string(min) + " and " + to_string(max));
    
        result = read_double(prompt);
    }

    return result;
}

// read bool
//Boolean between 
bool read_boolean(string prompt)
{
    string result;
    bool status;

    result = read_string(prompt);
    result = trim(to_lowercase(result));
    while (!status)
    {
        if (result == "yes" or result == "y")
        {
            status = true;
        }
        else if (result == "no" or result == "n")
        {
            status = false;
            return 0;
        }
        else
        {
           write_line("Invalid input. Please enter 'yes' or 'no': ");
             result = read_string(prompt);
             result = trim(to_lowercase(result));
        }
 
    }
    return status;
}