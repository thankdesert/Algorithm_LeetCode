//from : https://leetcode.com/problems/monotonic-array/


class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool desc;
        if(1==nums.size())
            return true;
        else if(nums[nums.size()-1]>nums[0])
            desc=true;
        else
            desc=false;
        
        for(int i=1;nums.size()>i;++i){
            if(true==desc&&nums[i]<nums[i-1])
                return false;
            else if(false==desc&&nums[i]>nums[i-1])
                return false;
        }
        return true;
    }
};
