#include <iostream>
#include <tuple>

#include <sstream>
#include <type_traits>

template <typename T>
std::string to_string(const T& value)
{
    if constexpr (std::is_arithmetic_v<T>) {
        return std::to_string(value);
    } else {
        std::ostringstream oss;
        oss << value;
        return oss.str();
    }
}

void print(const std::string& text) {
    std::cout << text << std::endl;
}

template <typename T>
void print(const T& value) {
    try {
        std::string text = to_string(value);
        print(text);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}


int main() {
    auto data = std::make_tuple(1, 2.3, 9, 2000);

    print("The first element is:");
    print(std::get<0>(data));

    print("The second element is:");
    print(std::get<1>(data));

    print("The third element is:");
    print(std::get<2>(data));

    print("The fourth element is:");
    print(std::get<3>(data));
    
    return 0;
}