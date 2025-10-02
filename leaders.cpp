#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> leader(vector<int>& arr)
{
    int n = arr.size();
    vector<int> res;
    int curr_ldr = arr[n - 1];
    res.push_back(curr_ldr);

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= curr_ldr)
        {
            curr_ldr = arr[i];
            res.push_back(curr_ldr);
        }
    }

    reverse(res.begin(), res.end()); // To maintain original order
    return res;
}

int main()
{
    vector<int> arr = {7, 10, 4, 3, 6, 5, 2};
    vector<int> leaders = leader(arr);

    cout << "Leaders: ";
    for (int num : leaders) {
        cout << num << " ";
    }
    cout << endl;
}