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
result = convert_to_integer(line);
return result;
}

//Double prompt
double read_prompt ( string prompt )
{
string line;
int result;
line = read_string(prompt);
result = convert_to_integer(line);
return result;
}

int main()
{

write_line();

//Declaring variables
string name;
int age;
double height;
double weight;
double BMI;


//Taking user name as input
name = read_string("Enter your name: ");

//Taking user age as input
age = read_integer("Enter your age: ");

write_line();
//Taking user height, weight as input to calculate BMI
height = read_prompt("Enter your height: ");
weight = read_prompt("Enter your weight: ");
BMI = weight / (height * height);

write_line();
write_line("Welcome " + name);
write_line("Great you are " + to_string(age));
write_line("Your BMI is " + to_string(BMI));

return 0;
}