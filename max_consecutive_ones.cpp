#include<iostream>
#include<vector>
using namespace std;

int maxConsecutiveOnes(vector<int>& arr)
{
    int n = arr.size();
    int res = 0;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 1)
        {
            count++;
        }
        else
        {
            res = max(res, count);
            count = 0;
        }
    }
    res = max(res, count); 
    return res;
}

int main()
{
    vector<int> arr = {1, 0, 0, 1, 1, 1, 0, 1, 0};
    int result = maxConsecutiveOnes(arr);
    cout << "Maximum consecutive ones: " << result << endl;
    return 0;
}