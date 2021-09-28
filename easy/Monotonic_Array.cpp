//from : https://leetcode.com/problems/monotonic-array/


class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int desc=0x000;
        if(1==nums.size())
            return true;
        else if(nums[nums.size()-1]>nums[0])
            desc=0x004;
        else
            desc=0x002;
        for(int i=1;nums.size()>i;++i){
            if(nums[i]==nums[i-1])
                continue;
            switch(desc^(nums[i]>nums[i-1])){
                case 0x005:
                    break;
                case 0x002:
                    break;
                default:
                    return false;
            }
        }
        return true;
    }
};
