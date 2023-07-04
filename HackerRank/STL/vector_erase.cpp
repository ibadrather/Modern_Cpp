#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

void printVector(const std::vector<int> &_vector)
{
    for (const auto &val : _vector)
    {
        std::cout << val << ' ';
    }
    std::cout << '\n';
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    // 1. Size of the vector
    int N;
    std::cin >> N;

    // 2. Fill vector with integers
    std::vector<int> numbers;
    int number;

    for (int i = 0; i < N; i++)
    {
        std::cin >> number;
        numbers.push_back(number);
    }

    // print vector
    // printVector(numbers);

    // 3. Remove element from a particular index
    int removeElementIndex;
    std::cin >> removeElementIndex;

    numbers.erase(numbers.begin() + removeElementIndex - 1);

    // printVector(numbers);

    // 4. Remove range of indexes
    int start, end;
    std::cin >> start >> end;

    numbers.erase(numbers.begin() + start - 1, numbers.begin() + end - 1);

    std::cout << numbers.size() << std::endl;

    printVector(numbers);

    return 0;
}
