/*
---------------------------------------------
Two_Sum
from : https://leetcode.com/problems/two-sum/
---------------------------------------------
*/

#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> v;
        int i = 0, j;
        for(auto item : nums)
            v.push_back(make_pair(item, i++));
        sort(v.begin(), v.end());
        for(i = 0; i<nums.size() - 1; i++)
            for(j = i+1; j<nums.size() && v[i].first + v[j].first <= target; j++)
                if(v[i].first + v[j].first == target)
                    return {v[i].second, v[j].second};
        return {0, 0};
    }
};
