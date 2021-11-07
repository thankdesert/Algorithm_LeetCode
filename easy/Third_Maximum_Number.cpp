//from : https://leetcode.com/problems/third-maximum-number/


class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i,k=2;
        for(i=nums.size()-2;0<=i;--i){
            if(nums[i]==nums[i+1])
                continue;
            else
                --k;
            if(0==k)
                break;
        }
        i==-1?i=0:i;
        return k==0?nums[i]:nums[nums.size()-1];
    }
};
