#include "splashkit.h"
using namespace std;

int main()
{
    // Declaring varibles
    string name;
    string your_age;
    int age;
    string year;
    int born_year;
    
    write_line(); // giving a space

    // Taking user name
    write("Enter Your Name : ");
    name = read_line();

    // Taking user age
    write("What is your age : ");
    your_age = read_line();
    age = convert_to_integer(your_age);

    // Taking current year
    write("What is this year : ");
    year = read_line();
    born_year = convert_to_integer(year) - age;

    write_line(); // giving a space

    // Display outputs
    write_line("Hello " + name);
    write_line("Nice you are " + to_string(age) + " years old");
    write_line("You are born in " + to_string(born_year));
    return 0;
}