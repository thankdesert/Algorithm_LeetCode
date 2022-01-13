//from : https://leetcode.com/problems/concatenation-of-array/


class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size=nums.size();
        for(int i=0;size>i;++i)
            nums.push_back(nums[i]);
        return nums;
    }
};
