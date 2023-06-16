#include <iostream>
#include <string>

int main() {
    // Declare and initialize std::string
    std::string str = "Hello, World!";

    // Access characters
    char first = str[0];  // first = 'H'
    char last = str[str.size() - 1];  // last = '!'

    std::cout << "First character: " << first << '\n';
    std::cout << "Last character: " << last << '\n';

    // Append to string
    str += " How are you?";

    // Find substring
    std::size_t found = str.find("World");
    if (found != std::string::npos)
        std::cout << "'World' found at: " << found << '\n';

    return 0;
}