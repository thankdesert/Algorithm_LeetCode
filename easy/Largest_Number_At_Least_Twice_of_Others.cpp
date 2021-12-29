//from : https://leetcode.com/problems/largest-number-at-least-twice-of-others/


class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ln=0,ldex=0;
        for(int i=0;nums.size()>i;++i)
            if(ln<nums[i]){
                ln=nums[i];
                ldex=i;
            }
        sort(nums.begin(),nums.end());
        for(int i=0;nums.size()-1>i;++i)
            if(nums[i]!=ln&&nums[i]*2>ln)
                return -1;
        return ldex;
    }
};
