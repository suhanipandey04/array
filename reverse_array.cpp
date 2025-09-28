#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& arr) {
    int n = arr.size();
    int low = 0, high = n - 1;
    while (low < high) {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    reverse(arr);

    cout << "Reversed array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}