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
    // 1. Get integers
    int N;
    std::cin >> N;

    std::vector<int> numbers;
    int number;

    // 2. Filling the vector with integers
    for (int i = 0; i < N; i++)
    {
        std::cin >> number;
        numbers.push_back(number);
    }

    // printVector(numbers);

    // 3. Number for queries
    int nQueries;
    std::cin >> nQueries;

    // 4. Get queries
    std::vector<int> queries;
    int query;

    for (int i = 0; i < nQueries; i++)
    {
        std::cin >> query;
        queries.push_back(query);
    }

    // printVector(queries);

    // 5. Find the query numbers
    int idx;

    for (const auto &query : queries)
    {
        auto it = std::lower_bound(numbers.begin(), numbers.end(), query);

        if (it != numbers.end())
        {
            idx = std::distance(numbers.begin(), it);
            if (query == numbers[idx])
            {
                std::cout << "Yes " << idx + 1 << std::endl;
            }
            else
            {
                std::cout << "No " << idx + 1 << std::endl;
            }
        }
    }

    return 0;
}
