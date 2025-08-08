// main.cpp
#include <iostream>
#include <string>
#include <vector>
#include "palm_library.hpp"

int main() {
    std::cout << "Welcome to the Automatic Palm Tree Project!" << std::endl;

    std::vector<std::string> palmTrees = get_palm_trees();
    
    std::cout << "Available Palm Trees:" << std::endl;
    for (const auto& tree : palmTrees) {
        std::cout << "- " << tree << std::endl;
    }

    return 0;
}