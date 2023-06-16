#include <iostream>
#include <set>

// Function to print a set
void printSet(const std::set<int>& s) {
    for (const auto& element : s) {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

// Usage of std::set
void setExample() {
    std::set<int> s;

    // Insert elements
    s.insert(5);
    s.insert(2);
    s.insert(1);
    s.insert(4);
    s.insert(3);

    printSet(s);  // Elements will be printed in sorted order: 1 2 3 4 5

    // Check if element is in the set
    if (s.count(3)) {
        std::cout << "Found 3\n";
    } else {
        std::cout << "Did not find 3\n";
    }

    // Erase an element
    s.erase(3);
    printSet(s);  // Now it prints: 1 2 4 5
}

int main() {
    setExample();
    return 0;
}