#include <iostream>
#include <array>

int main() {
    // Declare std::array of int of size 5
    std::array<int, 5> arr;

    // Initialize array
    for(int i=0; i<5; i++){
        arr[i] = i+1;
    }

    // Access elements
    int first = arr[0];  // first = 1

    // You can also use .at() to access elements.
    // The difference is, .at() checks for boundary
    // and throws an exception if you cross it.
    int second = arr.at(1);  // second = 2

    return 0;
}