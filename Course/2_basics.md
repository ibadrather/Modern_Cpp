
# Basic Syntax and Conventions

## Objectives
- Learn the syntax and conventions of C++
- Write simple programs using C++

---

## C++ Syntax

C++ syntax refers to the rules that define what a valid C++ program is. These rules include how to declare variables, define functions, and use operators.

```cpp
// This is a comment in C++

// Declaring a variable
int number;

// Defining a function
void sayHello() {
    std::cout << "Hello, world!" << std::endl;
}

// Using operators
int sum = 5 + 10;
```


## C++ Conventions
C++ conventions are agreed upon rules for writing code. They include naming variables and functions, indentation, and use of braces.
```cpp
// Naming variables: use lowerCamelCase for variables
int myVariable;

// Naming functions: use UpperCamelCase for functions
void MyFunction();

// Indentation: use spaces (often 4) or a tab for indentation
if (true) {
    std::cout << "It's true!" << std::endl;
}

// Braces: open the brace at the end of the function declaration line and close it on a new line
void MyFunction() {
    // function body
}
```
<hr>

## Simple Program: Hello World
The classic beginner's program - saying hello to the world.
```cpp
#include <iostream>

int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}
```
This program includes the iostream library to allow it to use the cout function for output. It then declares the main function, which is where all C++ programs start. Inside the main function, it outputs "Hello, world!" and then returns 0 to signal that the program finished successfully.

## Simple Program: Add Two Numbers
Here's a program that adds two numbers.
```cpp
#include <iostream>

int main() {
    int num1 = 10;
    int num2 = 20;
    
    int sum = num1 + num2;
    
    std::cout << "The sum is: " << sum << std::endl;
    
    return 0;
}
```
In this program, we declare two integers, num1 and num2, and set their values. We then add them together and store the result in the sum variable. Finally, we output the sum.
