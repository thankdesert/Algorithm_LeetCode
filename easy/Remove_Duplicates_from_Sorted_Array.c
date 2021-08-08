//from : https://leetcode.com/problems/remove-duplicates-from-sorted-array/


#include <climits>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i, j, cur = INT_MIN, k = 0;
        for(i = 0, j = 0; i<nums.size(); i++) {
            if(nums[i] > cur) {
                cur = nums[i];
                nums[j] = nums[i];
                j += 1;
                k += 1;
            }
        }
        return k;
    }
};
