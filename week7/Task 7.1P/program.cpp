#include "splashkit.h"
#include <vector>
using namespace std;

struct person
{
    string name;
    int age;
};

struct car
{
    string description;
    person driver;

    vector<person> passengers;
};

string read_string(string prompt)
{
    write(prompt);
    return read_line();
}

int read_integer(string prompt)
{
    write(prompt);
    return stoi(read_line());
}

person read_person()
{
    person result;
    result.name = read_string("Enter the person's name: ");
    result.age = read_integer("Enter the person's age: ");
    return result;

    write_line(" ");
}


void print_person(const person &to_print)
{
    write_line(to_print.name + " " + to_string(to_print.age));
}

car read_car()
{
    car result;
    result.description = read_string("Enter the car's description: ");
    write_line("Provide the driver's details:");
    result.driver = read_person();

    int count = read_integer("How many passengers: ");

    for (int i = 0; i < count; i++)
    {
        person passenger = read_person();
        result.passengers.push_back(passenger);
    }
    return result;
}

void print_car(const car &to_print)
{
    write_line("____________");
    write_line(to_print.description);
    write_line("____________");
    write_line("Driver");
    print_person(to_print.driver);
    write_line("____________");
    write_line("Passengers");

    for (person p : to_print.passengers)
    {
        print_person(p);
    }

    write_line("____________");
}

void populate_cars(vector <car> &cars)
{
    int count;
    count = read_integer("How many cars do you want to add: ");

    for(int i = 0; i < count; i++)
    {
        car temp;
        temp = read_car();

        cars.push_back(temp);
    }
}

void print_all_cars(const vector <car> &cars)
{
    for(car c : cars)
    {
        print_car(c);
        write_line();
    }
}

void print_cars_driven_by_driver(const vector<car>& cars, const string& driverName)
{
    for (const car& c : cars)
    {
        if (c.driver.name == driverName)
        {
            print_car(c);
        }
    }
}


int main()
{
    vector <car> cars;

    populate_cars(cars);

    print_all_cars(cars);

    string driverNameToSearch = read_string("Enter the driver's name to search for: ");
    print_cars_driven_by_driver(cars, driverNameToSearch);

    return 0;
}
