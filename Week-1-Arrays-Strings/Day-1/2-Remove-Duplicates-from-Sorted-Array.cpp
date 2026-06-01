// LeetCode 26 - Remove Duplicates from Sorted Array

// Time Complexity: O(n)

// Space Complexity: O(1)
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i - 1]) {
                nums[j++] = nums[i];
            }
        }
        return j;
    }
};