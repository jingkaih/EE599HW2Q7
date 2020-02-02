#include <iostream>
#include "src/lib/solution.h"
#include <map>
#include <string>
#include <vector>

int main()
{
    Solution solution;
    std::map<char, char> mymap = {};
    std::string from = "adda", to = "egge";
    mymap = solution.mapping(from, to);
    auto iter = mymap.begin();
    while(iter != mymap.end())
    {
        std::cout << iter->first << "->";
        std::cout << iter->second <<std::endl;
        
        iter++;
    }
    return EXIT_SUCCESS;
}

    