#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

// Function to calculate maximum number of different candies the sister can eat
int distributeCandies(std::vector<int>& candyType) {
    std::unordered_set<int> uniqueCandies(candyType.begin(), candyType.end());
    return std::min(uniqueCandies.size(), candyType.size() / 2);
}

int main() {
    // Example input
    std::vector<int> candies = {1, 1, 2, 2, 3, 3};

    // Call the function and print the result
    int result = distributeCandies(candies);
    std::cout << "Maximum number of different candies the sister can eat: " << result << std::endl;

    return 0;
}