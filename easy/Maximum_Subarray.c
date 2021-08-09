class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i, max;
        for(i = 1, max = nums[0]; i<nums.size(); i++) {
            if(nums[i-1] > 0)
                nums[i] += nums[i-1];
            nums[i] > max ? max = nums[i] : 1;
        }
        return max;
    }
};
