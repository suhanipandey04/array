#include <iostream>
using namespace std;

int main() {
    int arr[100] = {2, 4, 1, 0, 2}; // initial array
    int n = 5;                      // current size
    int z = 0;                      // element to delete

    // Find index of element to delete
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == z) {
            index = i;
            break;
        }
    }

    // If found, shift elements to the left
    if (index != -1) {
        for (int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // reduce size
        cout << "Element deleted successfully.\n";
    } else {
        cout << "Element not found.\n";
    }

    // Print updated array
    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}