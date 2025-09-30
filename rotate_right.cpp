#include<iostream>
#include<vector>
using namespace std;
int rotate(vector<int>& arr)
{
    int n=arr.size();
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
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