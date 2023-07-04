#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::vector<int> v = {1, 2, 4, 4, 5, 6};

    int target = 3;

    auto it = std::lower_bound(v.begin(), v.end(), target);

    if (it != v.end())
    {
        std::cout << "The first element not less than " << target
                  << " is at index " << std::distance(v.begin(), it);
    }
    else
    {
        std::cout << "No element not less than " << target << " was found.";
    }

    std::cout << "" << std::endl;

    return 0;
}
