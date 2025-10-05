//maximum subarray sum
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxsubarraysum(vector<int>& arr)
{
    int n=arr.size();
    int maxsum=INT_MIN;
    int currsum=0;
    for(int i=0;i<n;i++)
    {
        currsum+=arr[i];
        if(currsum>maxsum)
        {
            maxsum=currsum;
        }
        if(currsum<0)
        {
            currsum=0;
        }
    }
    return maxsum;

}
int main()
{
    vector<int> arr = {5,4,1,7,8};
    int result = maxsubarraysum(arr);
    cout << "max subarray sum: " << result << endl;
    return 0;

}
