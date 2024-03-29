# Help <img src="https://raw.githubusercontent.com/Tarikul-Islam-Anik/Telegram-Animated-Emojis/main/Symbols/Exclamation%20Mark.webp" alt="Exclamation Mark" width="40" height="40" />

<h3 align="left"> - $\color{yellow}{\textsf{Splashkit installation Guide}}$ &nbsp &nbsp : &nbsp https://splashkit.io/installation/ </h3>  <br>

<h3 align="left"> - $\color{lime}{\textsf{Installing MSYS2}}$  &nbsp &nbsp &nbsp : &nbsp  https://splashkit.io/installation/windows/mingw/step-1/</h3> <br>


>[!IMPORTANT]
> Here are some basic things to learn in C++ programming:
> - Syntax
> - Variables and Data Types
> - Conditionals and Logic
> - Loops
> - Vectors
> - Functions
> - Pointers and Memory
> - Inheritance, Templates, Vectors, Threads, Tasks

<br><br>

>[!NOTE]
>Here’s a simple C++ program that prints “Hello, World!” to the console:
```
#include <iostream>

int main() {
    std::cout << "Hello, World!";
    return 0;
}

```
- `#include <iostream>`: This is a preprocessor command that includes the iostream standard library, which allows for input and output in your program.
- `int main()`: This is the main function where your program starts execution. The `int` means that the `main()` function returns an integer.
- `std::cout << "Hello, World!";`: This is a statement that prints the string “Hello, World!” to the console. std::cout is the standard output stream in C++, and the `<< `operator is used to send data to it.
- `return 0;`: This is the return statement for the main() function. A return value of 0 indicates that the program has executed successfully.

<br>

> [!CAUTION]
> Remember, every C++ statement ends with a semicolon `;`. It’s like a period in a sentence. It indicates the end of one logical expression. Also, C++ is case-sensitive. For example, `main` and `Main` are two different identifiers in C++. So, be careful with your use of capital and lowercase letters.

<br><br>

>[!NOTE]
>Here’s a simple C++ program that demonstrates the use of variables and different data types:

```
#include <iostream>
#include <string>

int main() {
    int myInt = 10; // Integer
    float myFloat = 3.14; // Floating point number
    double myDouble = 2.71828; // Double precision floating point number
    char myChar = 'A'; // Character
    bool myBool = true; // Boolean
    std::string myString = "Hello, World!"; // String

    // Print the values
    std::cout << "Integer: " << myInt << "\n";
    std::cout << "Float: " << myFloat << "\n";
    std::cout << "Double: " << myDouble << "\n";
    std::cout << "Character: " << myChar << "\n";
    std::cout << "Boolean: " << myBool << "\n";
    std::cout << "String: " << myString << "\n";

    return 0;
}
```

This program declares variables of different data types, assigns them values, and then prints those values. Here’s what each part of the program does:

- `int myInt = 10;`: This declares an integer variable named `myInt` and assigns it the value `10`.
- `float myFloat = 3.14;`: This declares a floating-point variable named `myFloat` and assigns it the value `3.14`.
- `double myDouble = 2.71828;`: This declares a double-precision floating-point variable named `myDouble` and assigns it the value `2.71828`.
- `char myChar = 'A';`: This declares a character variable named `myChar` and assigns it the value `'A'`.
- `bool myBool = true;`: This declares a boolean variable named `myBool` and assigns it the value `true`.
- `std::string myString = "Hello, World!";`: This declares a string variable named `myString` and assigns it the value `"Hello, World!"`.
- The `std::cout` lines print the values of the variables to the console.

<br><br>

>[!NOTE]
> Here’s a simple C++ program that demonstrates the use of a for loop and a while loop:

```
#include <iostream>

int main() {
    // For loop
    std::cout << "For loop from 1 to 5:\n";
    for (int i = 1; i <= 5; i++) {
        std::cout << i << "\n";
    }

    // While loop
    std::cout << "While loop from 6 to 10:\n";
    int j = 6;
    while (j <= 10) {
        std::cout << j << "\n";
        j++;
    }

    return 0;
}

```

Here’s what each part of the program does:

- The `for` loop initializes a variable `i` to `1`, then continues looping as long as `i` is less than or equal to `5`. After each loop, `i `is incremented by `1`. The loop prints the value of `i`to the console on each iteration.
- The `while` loop initializes a variable `j` to `6`, then continues looping as long as `j `is less than or equal to `10`. After each loop, `j` is incremented by `1`. The loop prints the value of `j` to the console on each iteration.


<br><br>

>[!NOTE]
> Here’s a simple C++ program that demonstrates the use of vectors:

```
#include <iostream>
#include <vector>

int main() {
    // Declare a vector
    std::vector<int> myVector;

    // Add elements to the vector
    for (int i = 1; i <= 5; i++) {
        myVector.push_back(i);
    }

    // Print the elements of the vector
    std::cout << "Elements in the vector:\n";
    for (int i = 0; i < myVector.size(); i++) {
        std::cout << myVector[i] << "\n";
    }

    return 0;
}

```

Here’s what each part of the program does:

- `std::vector<int> myVector;`: This declares a vector of integers named `myVector`.
- The first `for` loop adds the numbers `1` through `5` to `myVector` using the `push_back` function.
- The second `for` loop prints the elements of `myVector` to the console. It uses the `size` function to determine the length of the vector, and it uses the `[]` operator to access the elements at each index.
