#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

int main()
{

    int Q;
    std::cin >> Q;

    std::set<int> numbers;

    int x, y;

    for (int i = 0; i < Q; i++)
    {
        // Get query
        std::cin >> y >> x;

        // Add element to the set
        if (y == 1)
        {
            numbers.insert(x);
        }
        // delete element from the set
        else if (y == 2)
        {
            numbers.erase(x);
        }
        // print yes or no accordingly
        else if (y == 3)
        {
            auto it = numbers.find(x);
            if (it != numbers.end())
            {
                std::cout << "Yes" << std::endl;
            }
            else
            {
                std::cout << "No" << std::endl;
            }
        }
    }
    return 0;
}
