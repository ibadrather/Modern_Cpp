#include <iostream>
#include <vector>
#include <algorithm>

void print_vector(const std::vector<int>& vec) {
    for (const auto& val : vec) {
        std::cout << val << ' ';
    }
    std::cout << '\n';
}

void create_vector() {
    std::vector<int> vec {1, 2, 3, 4, 5};  // Initialize vector
    print_vector(vec);
}

void add_elements_to_end() {
    std::vector<int> vec;
    vec.push_back(1);  // Add elements at the end
    vec.push_back(2);
    vec.push_back(3);
    print_vector(vec);
}

void remove_elements_from_end() {
    std::vector<int> vec {1, 2, 3, 4, 5};
    vec.pop_back();  // Remove elements from the end
    print_vector(vec);
}



void insert_elements() {
    std::vector<int> vec {1, 2, 3};
    vec.insert(vec.begin() + 1, 10);  // Insert 10 at the second position
    print_vector(vec);
}

void erase_elements() {
    std::vector<int> vec {1, 2, 3, 4, 5};
    vec.erase(vec.begin() + 2);  // Erase the third element
    print_vector(vec);
}

void size_of_vector() {
    std::vector<int> vec {1, 2, 3, 4, 5};
    std::cout << "Size of vector: " << vec.size() << '\n';  // Print the size
}

void access_elements() {
    std::vector<int> vec {1, 2, 3, 4, 5};
    std::cout << "Third element: " << vec[2] << '\n';  // Access the third element
}

void sort_vector() {
    std::vector<int> vec {5, 2, 3, 1, 4};
    std::sort(vec.begin(), vec.end());  // Sort the vector
    print_vector(vec);
}

int main() {
    create_vector();
    add_elements_to_end();
    remove_elements_from_end();
    insert_elements();
    erase_elements();
    size_of_vector();
    access_elements();
    sort_vector();

    return 0;
}
