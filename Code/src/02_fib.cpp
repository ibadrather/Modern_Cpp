#include <iostream>

void print_fibonacci(int n) {
    if(n <= 0) {
        std::cout << "Please enter a positive integer.";
    } else {
        int t1 = 0, t2 = 1, nextTerm = 0;

        std::cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

        nextTerm = t1 + t2;

        while(nextTerm <= n) {
            std::cout << nextTerm << ", ";
            t1 = t2;
            t2 = nextTerm;
            nextTerm = t1 + t2;
        }
    }
}


int fib() {
    int n;
    
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    print_fibonacci(n);

    return 0;
}
