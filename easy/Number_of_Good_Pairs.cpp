//from : https://leetcode.com/problems/number-of-good-pairs/


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt=0;
        for(int i=0;nums.size()-1>i;++i){
            for(int j=i+1;nums.size()>j;++j){
                if(nums[i]==nums[j])
                    ++cnt;
            }
        }
        return cnt;
    }
};
