//from : https://leetcode.com/problems/find-greatest-common-divisor-of-array/


class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(0==nums[nums.size()-1]%nums[0])
            return nums[0];
        else{
            for(int i=nums[0]/2;1<i;--i){
                if(0==nums[0]%i&&0==nums[nums.size()-1]%i)
                    return i;
            }
            return 1;
        }
    }
};
