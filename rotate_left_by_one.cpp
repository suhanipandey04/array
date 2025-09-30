#include<iostream>
#include<vector>
using namespace std;
int rotate(vector<int>& arr)
{
    int n=arr.size();
    int temp=arr[0];
    for(int i=0;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
int main()
{
   vector<int> arr={1,2,3,4,5};
    rotate(arr);
    cout << "After moving zeros: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}
