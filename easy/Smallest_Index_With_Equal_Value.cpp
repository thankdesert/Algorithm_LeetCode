//from : https://leetcode.com/problems/smallest-index-with-equal-value/


class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for(int i=0;nums.size()>i;++i){
            if(i%10==nums[i])
                return i;
        }
        return -1;
    }
};
