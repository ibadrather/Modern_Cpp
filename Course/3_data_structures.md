# Data Structures in C++ 17

## Arrays and Strings
Arrays and Strings are fundamental data structures in C++. This section will cover the `std::array` and `std::string` types.

### std::array
`std::array` is a container that encapsulates fixed size arrays. Unlike traditional C arrays, `std::array` doesn't decay to a pointer when passed to a function. It also includes functions that help in maintaining, accessing, and manipulating array data.
```cpp
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
```

### std::string
`std::string` is a sequence of characters. It's a class in the C++ standard library that provides various methods and operators to manipulate and examine strings. Unlike C-style strings, which are arrays of char, `std::string` objects manage their own memory, growing and shrinking as needed.
```cpp
#include <string>

int main() {
    // Declare and initialize std::string
    std::string str = "Hello, World!";

    // Access characters
    char first = str[0];  // first = 'H'
    char last = str[str.size() - 1];  // last = '!'

    // Append to string
    str += " How are you?";

    // Find substring
    std::size_t found = str.find("World");
    if (found != std::string::npos)
        std::cout << "'World' found at: " << found << '\n';

    return 0;
}
```
Note: The `std::string::find` function returns the position of the first character of the first match. If no matches were found, the function returns `std::string::npos`.
Remember to compile and run your C++ code to understand how these examples work.


## Vectors
Vectors are part of the C++ Standard Library that provide dynamic arrays, meaning the arrays that can grow or shrink in size dynamically.

### std::vector::push_back
`std::vector::push_back` is a function that adds an element to the end of the vector. The size of the vector increases by one.
```cpp
#include <vector>

int main() {
    // Declare and initialize std::vector
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Add elements using push_back
    vec.push_back(6);  // vec: {1, 2, 3, 4, 5, 6}

    return 0;
}
```

### std::vector::pop_back
`std::vector::pop_back` is a function that removes the last element of the vector, effectively reducing the container size by one.
```cpp
#include <vector>

int main() {
    // Declare and initialize std::vector
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Remove last element using pop_back
    vec.pop_back();  // vec: {1, 2, 3, 4}

    return 0;
}
```
Note that `std::vector::pop_back` doesn't return the removed element; it simply discards it. If you need to use the last element before removing it, make sure to access it before calling `pop_back`.
```cpp
#include <vector>
#include <iostream>

int main() {
    // Declare and initialize std::vector
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Get and print the last element
    int last = vec.back();
    std::cout << "Last element: " << last << std::endl;  // prints: "Last element: 5"

    // Now remove it
    vec.pop_back();  // vec: {1, 2, 3, 4}

    return 0;
}
```

## Sets and Maps
Sets and Maps are associative containers in C++. They store elements in a manner that allows for fast retrieval of individual elements based on keys.

### std::set
`std::set` is a container that stores unique keys, in no particular order. Elements are sorted according to the comparison function passed to the set object during its creation. Insertion, removal, and search operations have logarithmic complexity.
```cpp
#include <set>
#include <iostream>

int main() {
    // Declare and initialize std::set
    std::set<int> s;

    // Insert elements
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(1);  // This won't be added, as set elements must be unique

    // The set s now holds: {1, 3, 4} - elements are sorted automatically

    // Check if an element is in the set
    if (s.count(3) > 0) {
        std::cout << "3 is in the set\n";
    }

    return 0;
}
```

### std::map
`std::map` is a container that stores elements formed by a combination of a key value and a mapped value. The key value is used to uniquely identify the element and mapped value is the content associated with the key. Elements are sorted according to the keys.
```cpp
#include <map>
#include <iostream>

int main() {
    // Declare and initialize std::map
    std::map<std::string, int> m;

    // Insert key-value pairs
    m["Alice"] = 20;
    m["Bob"] = 25;
    m["Charlie"] = 30;

    // The map m now holds: {"Alice"->20, "Bob"->25, "Charlie"->30} - elements are sorted by key

    // Access elements
    std::cout << "Alice is " << m["Alice"] << " years old\n";

    // Check if a key is in the map
    if (m.count("Bob") > 0) {
        std::cout << "Bob is in the map\n";
    }

    return 0;
}
```

## Stacks and Queues
Stacks and Queues are container adaptors in C++. They use an encapsulated object of a specific container class as its underlying container, providing a specific set of member functions to access its elements.

### std::stack
`std::stack` provides a Last-In-First-Out (LIFO) data structure. The element inserted last is the first one to be removed.
```cpp
#include <stack>
#include <iostream>

int main() {
    // Declare std::stack
    std::stack<int> s;

    // Insert elements (push onto the stack)
    s.push(1);
    s.push(2);
    s.push(3);

    // Now the stack is: [3, 2, 1] (where [3, 2, 1] denotes a stack with top at the left)

    // Access top element
    int top = s.top();  // top = 3

    // Remove top element
    s.pop();

    // Now the stack is: [2, 1]

    return 0;
}
```

### std::queue
`std::queue` provides a First-In-First-Out (FIFO) data structure. The element inserted first is the first one to be removed.
```cpp
#include <queue>
#include <iostream>

int main() {
    // Declare std::queue
    std::queue<int> q;

    // Insert elements (enqueue)
    q.push(1);
    q.push(2);
    q.push(3);

    // Now the queue is: [1, 2, 3] (where [1, 2, 3] denotes a queue with front at the left)

    // Access front element
    int front = q.front();  // front = 1

    // Remove front element (dequeue)
    q.pop();

    // Now the queue is: [2, 3]

    return 0;
}
```
Remember to compile and run your C++ code to understand how these examples work.
