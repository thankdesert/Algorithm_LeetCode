//from : https://leetcode.com/problems/remove-element/


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i, j, k = 0;
        for(i = 0, j = 0; i<nums.size(); i++) {
            if(nums[i] != val) {
                nums[j] = nums[i];
                j += 1; k += 1;
            }                
        }
        return k;
    }
};
