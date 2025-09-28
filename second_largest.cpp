#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int getsecondlargest(vector<int>& arr) {
    int n = arr.size();
    if (n < 2) return -1; // not enough elements

    int largest = INT_MIN;
    int secondlargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondlargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondlargest && arr[i] != largest) {
            secondlargest = arr[i];
        }
    }

    return (secondlargest == INT_MIN) ? -1 : secondlargest;
}

int main() {
    vector<int> arr = {10, 20, 20, 5, 15};
    int result = getsecondlargest(arr);

    if (result != -1)
        cout << "Second largest element: " << result << endl;
    else
        cout << "No second largest element found." << endl;

    return 0;
}