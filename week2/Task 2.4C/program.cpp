#include "splashkit.h"
#include "terminal_user_input.h"

using namespace std;

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
    name = read_string("Enter your name : ");

    //Taking user age as input
    age = read_integer("Enter your age : ");

    //Taking user height and weight as input to calculate BMI
    height = read_double("Enter your height : ");
    weight = read_double("Enter your weight : ");
    BMI = weight / (height * height);

    write_line();
    
    //Display Outputs
    write_line("Hello " + name);
    write_line("Great you are " + to_string(age) + " years old");
    write_line("Your BMI score is " + to_string(BMI));

return 0;
}
