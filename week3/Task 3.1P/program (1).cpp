#include "splashkit.h"
using namespace std;

string read_string ( string prompt )
{
    string result;

    write(prompt);
    result = read_line();
    return result;
}

int read_integer ( string prompt )
{
    string line;
    int result;

    line = read_string(prompt);
    result = convert_to_integer(line);
    return result;
}

void output_crazy_age(int age)
{
    write(to_string(age) + " is a");

    int i=0;
    while (i<10)
    {
        write(" crazy");
        i++;
    }
    write_line(" age!");
}

void output_silly_name(string name)
{
    write(name + " is a");

    int i=0;
    while (i<10)
    {
        write(" silly");
        i++;
    }
    write_line(" name!");
}

int main()
{
    string name;
    int age;

    write_line();

    name = read_string("Enter your name : ");
    write_line();
    write_line("Welcome " + name + "!");

    if (name == "Charitha")
    {
        write_line("Awesome name!!");
    }
    else if (name == "Manusha" or name == "Sachintha")
    {
        write_line("Please change your Name !!!!!!!!!!!!!!!!!!! ");
    }
    else
    {
        output_silly_name(name);
    }

    write_line();
    age = read_integer("Enter your age : ");
    write_line();

    if (age == 30 or age == 60 )
    {
        write_line("Interesting age!");
    }
    else if (age < 0 or age > 120)
    {
        write_line("Are you sure?");
    }
    else if(age > 5 and age < 10)
    {
        output_crazy_age(age);
    }
    else 
    write_line("Great You are " + to_string(age));


return 0;
}