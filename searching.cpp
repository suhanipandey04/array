#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& arr, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;  // Element not found
}

int main()
{
    vector<int> arr = {1, 2, 3, 5};
    int x;
    cout << "Enter the element to search: ";
    cin >> x;

    int n = arr.size();
    int index = search(arr, n, x);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}