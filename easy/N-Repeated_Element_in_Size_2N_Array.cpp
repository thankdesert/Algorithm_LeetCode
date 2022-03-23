//from : https://leetcode.com/problems/n-repeated-element-in-size-2n-array/


class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> um;
        for(int i=0;nums.size()>i;++i){
            ++um[nums[i]];
        }
        int n=nums.size()/2;
        for(auto item:um)
            if(n==item.second)
                return item.first;
        return 0;
    }
};
