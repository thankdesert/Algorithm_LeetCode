//from : https://leetcode.com/problems/squares-of-a-sorted-array/submissions/


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;nums.size()>i;++i)
            nums[i]=nums[i]*nums[i];
        sort(nums.begin(),nums.end());
        return nums;
    }
};
