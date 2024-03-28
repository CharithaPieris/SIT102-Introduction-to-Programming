#include "splashkit.h"
using namespace std;

string read_string(string prompt)
{
    string input;
    write(prompt);
    input = read_line();
    return input;
}

int read_integer(string prompt)
{
    string input;
    write(prompt);
    input = read_line();
    return stoi(input);
}

void print_values(double values[], int size)
{
    write_line("Values are:");
    for (int i = 0; i < size; i++) 
    {
        write_line(values[i]);
    }
}

void read_values(double values[], int size)
{
    for (int i = 0; i < size; i++)
    {
        string input = read_string("Enter value: ");
        values[i] = stod(input);
    }
}

double sum(double values[], int size)
{
    double result = 0;

    for(int i = 0; i < size; i++)
    {
        result += values[i];
    }
    return result;
}

int count_negative(const double data[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (data[i] < 0)
        {
            count++;
        }
    }
    return count;
}

double maximum(const double data[], int size)
{
    double result = data[0];

    for (int i = 1; i < size; i++)
    {
        if (data[i] > result)
        {
            result = data[i];
        }
    }
    return result;
}

int main()
{
    int count;
    count = read_integer("How many values: ");

    double temp[count];

    read_values(temp, count);
    print_values(temp, count);

    write_line();
    write_line("Sum is:");
    write_line(sum(temp, count));

    write_line();
    write_line("Count of negative values:");
    write_line(count_negative(temp, count));

    write_line();
    write_line("Maximum value:");
    write_line(maximum(temp, count));
    
    return 0;
}