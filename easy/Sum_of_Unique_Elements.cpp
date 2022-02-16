//from : https://leetcode.com/problems/sum-of-unique-elements/


class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> um;
        for(int i=0;nums.size()>i;++i)
            ++um[nums[i]];
        int sum=0;
        for(auto item:um)
            if(1==item.second)
                sum+=item.first;
        return sum;
    }
};
