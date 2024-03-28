#include "splashkit.h"
#include <vector>
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

void print_values(const vector<double>& values)
{
    write_line("Values are:");
    for (int i = 0; i < values.size(); i++)
    {
        write_line(to_string(values[i]));
    }
}

void read_values(vector<double>& values, int count)
{
    double data;
    for (int i = 0; i < count; i++)
    {
        string input = read_string("Enter temperature value: ");
        data = stod(input);
        values.push_back(data);
    }
}

double sum(const vector<double>& values)
{
    double result = 0;

    for(int i = 0; i < values.size(); i++)
    {
        result += values[i];
    }
    return result;
}

int count_negative(const vector<double>& data)
{
    int count = 0;

    for (int i = 0; i < data.size(); i++)
    {
        if (data[i] < 0)
        {
            count++;
        }
    }
    return count;
}

double maximum(const vector<double>& data)
{
    double result = data[0];

    for (int i = 1; i < data.size(); i++)
    {
        if (data[i] > result)
        {
            result = data[i];
        }
    }
    return result;
}

vector<double> double_all(const vector<double>& input)
{
    vector<double> result;
    for (int i = 0; i < input.size(); i++)
    {
        result.push_back(input[i] * 2);
    }
    return result;
}

int main()
{
    int count;
    vector<double> temp;
    vector<double> copy;

    count = read_integer("How many values: ");
    read_values(temp, count);
    copy = double_all(temp);

    print_values(temp);
    write_line("Sum is:");
    write_line(sum(temp));
    write_line();

    write_line("All double is...");
    print_values(copy);
    write_line();

    write_line("Sum is:");
    write_line(sum(copy));
    write_line();

    write_line("The number of negative values is:");
    write_line(count_negative(temp));
    write_line();
    
    write_line("The largest value is:");
    write_line(maximum(temp));
    return 0;
}