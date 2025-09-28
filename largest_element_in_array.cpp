#include<iostream>
using namespace std;

int getLargest(int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }
    return largest;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    cout << "Largest element: " << getLargest(arr, 4);
    return 0;
}