#include<iostream>
#include<vector>
using namespace std;
int movezero(vector<int>& arr)
{
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]!=0)
                {
                    swap(arr[i],arr[j]);
                    break;
                }
            }
        }
    }
}
int main()
{
    vector<int> arr={1,0,9,3,0,4};
    movezero(arr);
    cout << "After moving zeros: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;


}