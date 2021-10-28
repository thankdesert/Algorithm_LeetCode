//from : https://leetcode.com/problems/running-sum-of-1d-array/


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;nums.size()>i;++i)
            nums[i]+=nums[i-1];
        return nums;
    }
};
