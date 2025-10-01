#include <iostream>
#include <vector>
using namespace std;

// Function to rotate the array left by one position
void leftrotateone(vector<int>& arr) {
    int n = arr.size();
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

// Function to rotate the array left by d positions
void rotate(vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n; // Handle cases where d > n
    for (int i = 0; i < d; i++) {
        leftrotateone(arr);
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int d = 2;

    rotate(arr, d);

    cout << "Rotated array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
