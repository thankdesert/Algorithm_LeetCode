//from : https://leetcode.com/problems/shuffle-the-array/


class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v;
        for(int i=0;n>i;++i){
            v.push_back(nums[i]);
            v.push_back(nums[i+n]);
        }
        return v;
    }
};
