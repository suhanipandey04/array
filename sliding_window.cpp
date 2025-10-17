//find the maximum of k consequitive elements




#include<iostream>
#include<vector>
#include<climits>
using namespace std;

    //brute force approach
   /* int maxSubarraySum(vector<int>& arr, int k)
     {
        
        int n =arr.size();
        int res=INT_MIN;
        for(int i=0;i+k-1<n;i++)
        {
            int curr=0;
            for(int j=0;j<k;j++)
            {
                curr=curr+arr[i+j];
            }
            res=max(res,curr);
        }
        return res;
        
    }*/

    //optimize approach
    int maxSubarraySum(vector<int>& arr, int k)
    {
    int n=arr.size();
        int curr=0;
        for(int i=0;i<k;i++)
        {
            curr=curr+arr[i];
        }
        int res=curr;
        for(int i=k;i<n;i++)
        {
            curr=curr+arr[i]-arr[i-k];
            res=max(res,curr);
        }
        return res;
    }




int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    int result = maxSubarraySum(arr, k);
    cout << "Maximum sum of subarray of size " << k << " is: " << result << endl;

    return 0;
}




   
