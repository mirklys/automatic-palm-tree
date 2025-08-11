#include "palm_library.hpp"
#include <algorithm>

std::vector<std::string> get_palm_trees(int count) {
    const std::vector<std::string> palm_trees = {"Coconut Palm", "Date Palm", "Oil Palm"};
    if (count >= palm_trees.size()){
        count = palm_trees.size();
    }
    count = std::min(static_cast<size_t>(count), palm_trees.size());

    return std::vector<std::string>(palm_trees.begin(), palm_trees.begin() + count);
}