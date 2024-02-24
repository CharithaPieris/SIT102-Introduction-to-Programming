//header file declares three functions which receive a prompt string and return a string, integer, or double value depending on the function.
//The code uses the standard string library, indicated by the line "using std::string;", to define the string data type.
using std::string;

string read_string ( string prompt );   //This function takes a prompt string as an argument and returns a string entered by the user.
int read_integer ( string prompt );     //his function takes a prompt string as an argument and returns an integer entered by the user.
double read_double ( string prompt );   //This function takes a prompt string as an argument and returns a double precision floating-point number entered by the user.

//The implementation code of these functions are written in the program.cpp file and the terminal_user_input.cpp file 