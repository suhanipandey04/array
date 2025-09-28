#include <iostream>
using namespace std;

int main() {
    int arr[100] = {1, 2, 3, 5, 6}; // initial array
    int n = 5;                      // current size
    int value = 4;
    int position = 3;              // index where to insert

    // Shift elements to the right
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the value
    arr[position] = value;
    n++; // increase size

    // Print updated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}