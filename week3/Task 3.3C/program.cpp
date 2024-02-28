#include "splashkit.h"
#include "terminal_user_input.h"

using namespace std;

int main()
{

    write_line();

    //Declaring variables
    string name;
    int age;
    int test;
    double height;
    double weight;
    double BMI;
    double number;
    bool boolean;

do
{
    //Taking user name as input
    name = read_string("Enter your name : ");

    //Taking user age as input
    age = read_integer("Enter your age : ");


    //Taking user height and weight as input to calculate BMI
    write_line();
    height = read_double("Enter your height : ");
    write_line();
    weight = read_double("Enter your weight : ");
    write_line();
    BMI = weight / (height * height);

    write_line();
    
    //Display Outputs
    write_line("Hello " + name);
    write_line("Great you are " + to_string(age) + " years old");
    write_line("Your BMI score is " + to_string(BMI));
    write_line();

    test = read_integer("Enter a number between 1 and 10 : ", 1, 10);
    write_line(to_string(test));

    write_line();

    number = read_double_range("Enter a double between 0.0 and 1.0 : ", 0.0 , 1.0);
    write_line(to_string(number));

    write_line();
    boolean = read_boolean("Try this again (y/n)");
    write_line();
   
} while (boolean);



return 0;
}
