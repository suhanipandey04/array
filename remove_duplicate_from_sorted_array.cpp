#include <iostream>
#include <vector>

using namespace std;
    int  removeDuplicates(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return {};

        
        int res = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i - 1]) {
                arr[res] = arr[i];
                res++;
            }
        }

        
        return res;
    }


int main() {
    vector<int> arr = {10,20,20,30,30,30,30};

   cout<<removeDuplicates(arr)<<endl;
}