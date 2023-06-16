#include <iostream>

int main() {
    int num1, num2;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch(operation) {
        case '+':
            std::cout << "The result is: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "The result is: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "The result is: " << num1 * num2 << std::endl;
            break;
        case '/':
            // Handle division by zero
            if (num2 != 0)
                std::cout << "The result is: " << num1 / num2 << std::endl;
            else
                std::cout << "Error! Division by zero is not allowed." << std::endl;
            break;
        default:
            std::cout << "Invalid operator!" << std::endl;
    }

    return 0;
}
