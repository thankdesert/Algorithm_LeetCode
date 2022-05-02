//from : https://leetcode.com/problems/intersection-of-multiple-arrays/


class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int> um;
        
        for(int i=0;nums.size()>i;++i){
            for(int item:nums[i])
                ++um[item];
        }
        vector<int> answer;
        for(auto item:um)
            if(nums.size()==item.second)
                answer.push_back(item.first);
        sort(answer.begin(),answer.end());
        return answer;
    }
};
