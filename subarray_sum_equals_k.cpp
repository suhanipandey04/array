#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int subarraySum(vector<int>& nums, int k) {

    int n = nums.size();

    //brute force approach
    /*
    int count = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += nums[j];
            if (sum == k) {
                count++;
            }
        }
    }

    return count;
    */
   int count=0;
        vector<int> prefixsum(n,0);

        prefixsum[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefixsum[i]=prefixsum[i-1]+nums[i];
        }
        unordered_map<int,int> m;//PS,freq
        for(int j=0;j<n;j++)
        {
            if(prefixsum[j]==k)
               count++;
             int val=prefixsum[j]-k; 
             if(m.find(val)!=m.end())
             {
                count +=m[val];
             }  
             if(m.find(prefixsum[j]) == m.end())
             {
                m[prefixsum[j]]==0;
             }
             m[prefixsum[j]]++;
        }
        return count;
}

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target sum k: ";
    cin >> k;

    int result = subarraySum(nums, k);
    cout << "Number of subarrays with sum " << k << " is: " << result << endl;

    return 0;
}