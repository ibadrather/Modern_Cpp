#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <sstream>
#include <tuple>

std::tuple<int, std::string, int> readValuesFromConsole()
{
    std::string line;
    std::getline(std::cin, line);

    std::istringstream ss(line);
    int v1 = 0;
    std::string v2 = "";
    int v3 = 0;

    ss >> v1;
    if (!ss.eof())
        ss >> v2;
    if (!ss.eof())
        ss >> v3;

    return std::make_tuple(v1, v2, v3);
}

int main()
{
    // 1. Get number of queries
    int Q;
    std::cin >> Q;
    std::cin.ignore(); // Consume '\n' left in the input buffer

    // Initialise Map
    std::map<std::string, int> studentRecord;

    // 3. Process each query
    for (int i = 0; i < Q; i++)
    {
        auto [type, name, marks] = readValuesFromConsole();

        if (type == 1)
        {
            studentRecord[name] += marks;
        }
        else if (type == 2)
        {
            studentRecord.erase(name);
        }
        else if (type == 3)
        {
            auto it = studentRecord.find(name);
            if (it != studentRecord.end())
                std::cout << it->second << std::endl;
            else
                std::cout << "0" << std::endl;
        }
    }

    return 0;
}
