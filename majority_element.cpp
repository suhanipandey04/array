//boyre moore majority voting algorithm
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res = 0;
        int count = 1;

        // Phase 1: Find a candidate
        for (int i = 1; i < nums.size(); i++) {
            if (nums[res] == nums[i]) {
                count++;
            } else {
                count--;
            }
            if (count == 0) {
                res = i;
                count = 1;
            }
        }

        // Phase 2: Verify the candidate
        count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == nums[res]) {
                count++;
            }
        }

        if (count > nums.size() / 2) {
            return nums[res];
        } else {
            return -1; // No majority element
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2}; // Sample input
    int result = sol.majorityElement(nums);

    if (result != -1) {
        cout << "Majority element is: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}