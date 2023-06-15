# Introduction to C++ 17
## Introduction to C++
### Understanding C++
C++ is a general-purpose programming language that was developed by Bjarne Stroustrup as an extension of the C language. It's noted for its performance, efficiency, and its support for object-oriented, procedural, and generic programming paradigms.

C++ offers a blend of high-level and low-level features, making it a versatile language for various kinds of software development, ranging from system software to game engines. Its support for classes and objects, constructors and destructors, polymorphism, and encapsulation make it a strong object-oriented programming language.

### The Evolution of C++
C++ has seen several versions over the years, each bringing new features, improvements, and bug fixes. The key versions are:

- C++98 / C++03: The first standardized versions of C++.
- C++11: Introduced a renewed focus on performance and efficiency. Features include auto, range-based for loops, null pointer constants, and more.
- C++14: Improved upon C++11 with minor bug fixes and feature improvements.
- C++17: Brought significant changes and improvements over C++14, which we'll discuss further.
- C++20: As of my knowledge cutoff in September 2021, this is the most recent version, bringing even more features and enhancements.

## C++ 17 vs Older Versions
### Enhancements in C++17
C++17 introduced several new features and improvements over its predecessors. Some of these enhancements include:

1. __Structured Bindings__: This feature allows you to declare multiple variables initialized from a tuple or struct.

```cpp
auto [a, b] = make_pair(1, "hello");

```

2. **Inline Variables**: C++17 allows inline specification for variables, which can be useful for defining variables in header files without running into multiple definition problems.

```cpp
inline int var = 0;  // var is same across all translation units

```

3. **Fold Expressions**: C++17 introduced fold expressions for more concise code involving variadic templates.

```cpp
template<typename... Args>
auto sum(Args... args) {
    return (... + args);  // Fold expression
}

```

4. **std::optional**: This type wrapper addresses scenarios where a function might or might not return a value.

```cpp
std::optional<int> maybe_value = function_might_return();
if(maybe_value) {
    int value = *maybe_value;
}

```

5. **std::variant**: This is a type-safe union, an instance of which can hold a value of any of its alternative types.

```cpp
std::variant<int, float> intOrFloat = 3.14f;
std::get<float>(intOrFloat);  // Will throw bad_variant_access if holds alternative type

```

6. **std::string_view**: This is a non-owning reference to a string. It’s a more efficient way of passing around references to a string, without incurring the cost of copying.

```cpp
void print(std::string_view sv) {
    std::cout << sv;
}

```

7. **Parallel STL Algorithms**: C++17 added support for parallel versions of many standard algorithms, potentially providing significant speedups.

```cpp
std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
std::sort(std::execution::par, vec.begin(), vec.end());

```

### Comparing C++17 with Older Versions

C++17 offers clear advantages over older versions:

- It provides more standard library features, like std::optional and std::variant, reducing the need for third-party libraries or complex class hierarchies.
- It offers better performance through features like std::string_view and parallel algorithms.
- New language features such as structured bindings, inline variables, and fold expressions make code more readable and maintainable.
- C++17 also removed several deprecated features and libraries, encouraging cleaner, more efficient coding practices.

## Assignments
1. Write a comparison of different C++ versions, focusing on their syntax and features.
2. Implement basic programs using C++17 features like structured bindings, inline variables, fold expressions, std::optional, std::variant, std::string_view, and parallel STL algorithms.
3. Compare the programs written in C++17 with similar programs written in older C++ versions. Discuss the differences in code readability, performance, and maintainability.

## References and Further Reading
1. Bjarne Stroustrup, "A Tour of C++", Second Edition: Addison-Wesley, 2018.
2. "C++17 - The Complete Guide" by Nicolai M. Josuttis.
3. [cppreference.com](https://cppreference.com/) for detailed C++ documentation.



# Assignments

Comparing C++ versions and features can't be accomplished in a code snippet, since it's a theoretical analysis of syntax and features. Please refer to the content 
section "C++ 17 vs Older Versions" above for details.

## Implementing basic programs with C++17 features:

### Structured Bindings:
```cpp
#include <tuple>

int main() {
    auto [x, y] = std::make_tuple(5, 3.14);
    // x is 5, y is 3.14
    return 0;
}
```

### Inline Variables:
```cpp

// In a header file
inline int global_var = 10;
```

### Fold Expressions:
```cpp
template<typename... Args>
auto multiply(Args... args) {
    return (... * args);
}
```

### std::optional:
```cpp
#include <optional>

std::optional<int> get_value(bool return_value) {
    if (return_value) {
        return 123;
    } else {
        return {};
    }
}

int main() {
    auto val = get_value(true);
    if (val) {
        // value exists
    }
}
```

### std::variant:
```cpp
#include <variant>
#include <string>

int main() {
    std::variant<int, std::string> var = "Hello";
    // var currently holds a string
    var = 123;
    // var now holds an int
}
```

### std::string_view:
```cpp
#include <string_view>

void print(std::string_view sv) {
    std::cout << sv << '\n';
}

int main() {
    print("Hello, World!");
}
```

### Parallel STL Algorithms:
```cpp
#include <vector>
#include <algorithm>
#include <execution>

int main() {
    std::vector<int> v = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    std::sort(std::execution::par, v.begin(), v.end());
    // v is now sorted in ascending order
}
```

## Comparing programs written in C++17 with those in older versions:

### Structured Bindings vs Traditional Binding:

```cpp
// Before C++17
std::pair<int, double> p = std::make_pair(5, 3.14);
int x = p.first;
double y = p.second;

// With C++17
auto [x, y] = std::make_pair(5, 3.14);
```

In the C++17 version, the code is simpler and more readable. The syntax makes it clear that we are decomposing the pair into its elements.

### Parallel STL Algorithms vs Sequential STL Algorithms:

```cpp
// Before C++17
std::vector<int> v = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
std::sort(v.begin(), v.end());

// With C++17
std::vector<int> v = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
std::sort(std::execution::par, v.begin(), v.end());
```

With C++17's parallel STL algorithms, the program could be faster on systems with multiple cores. However, not all workloads will benefit from parallel execution; for small collections or simple comparison functions, the cost of parallelization might outweigh its benefits.


Each new C++ version aims to enhance both the performance and readability of your code, and C++17 is no exception. Use these new features to make your code more efficient and easier to maintain.
