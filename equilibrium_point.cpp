#include <iostream>
#include <vector>
#include <numeric> // for accumulate

int findEquilibrium(const std::vector<int>& arr) {
    int total = std::accumulate(arr.begin(), arr.end(), 0);
    int leftTotal = 0;

    for (int i = 0; i < arr.size(); i++) {
        int rightTotal = total - leftTotal - arr[i];
        if (leftTotal == rightTotal) {
            return i; // 0-based index
        }
        leftTotal += arr[i];
    }

    return -1; // No equilibrium point found
}

int main() {
    std::vector<int> arr = {1, 3, 5, 2, 2}; // Example input
    int index = findEquilibrium(arr);

    if (index != -1) {
        std::cout << "Equilibrium index found at: " << index << std::endl;
    } else {
        std::cout << "No equilibrium index found." << std::endl;
    }

    return 0;
}