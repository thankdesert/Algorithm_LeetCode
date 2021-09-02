//from : https://leetcode.com/problems/majority-element/


#include <unordered_map>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> um;
        for(int i=0;nums.size()>i;++i)
            um[nums[i]]+=1;
        int max = 0, max_key=0;
        for(auto item:um) {
            if(max<item.second) {
                max=item.second;
                max_key=item.first;
            }
        }
        return max_key;
    }
};
