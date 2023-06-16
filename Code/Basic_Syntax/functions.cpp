#include <iostream>
#include <tuple>

void print(std::string text) {
    std::cout << text << std::endl;
}


// If we are using C++20 we can use auto as the argument type
// auto add_two_numbers(auto a, auto b) {
//     return a + b;
// }

// FOr c++17 we have to use template
template <typename T1, typename T2>
auto add_two_numbers(T1 a, T2 b) {
    return a + b;
}


int main() {
    auto [a, b] = std::make_tuple(1, 2.3);

    auto result = add_two_numbers(a, b);

    print("The result is:");

    print(std::to_string(result));
    
    return 0;
}