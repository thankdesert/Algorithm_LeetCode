//from : https://leetcode.com/problems/single-number/


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int k = 0;
        for(auto item : nums)
            k = k ^ item;
        return k;
    }
};
