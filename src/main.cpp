// main.cpp
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::cout << "Welcome to the Automatic Palm Tree Project!" << std::endl;

    // Example of using a vector
    std::vector<std::string> palmTrees = {"Coconut Palm", "Date Palm", "Oil Palm"};
    
    std::cout << "Available Palm Trees:" << std::endl;
    for (const auto& tree : palmTrees) {
        std::cout << "- " << tree << std::endl;
    }

    return 0;
}