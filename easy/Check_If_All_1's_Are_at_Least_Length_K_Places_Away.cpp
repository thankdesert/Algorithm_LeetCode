//from : https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/


class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int i=0,j=-1;
        while(nums.size()>i&&0==nums[i])
            ++i;
        j=i;
        for(i+=1;nums.size()>i;++i){
            if(1==nums[i]){
                if(k>i-j-1)
                    return false;
                j=i;
            }
        }
        
        return true;
    }
};
