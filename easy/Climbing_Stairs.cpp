//from : https://leetcode.com/problems/climbing-stairs/

class Solution {
public:
    int climbStairs(int n) {
        vector<int> v = {0, 1, 2};
        for(int i = 3; i<=n; i++)
            v.push_back(v[i-2] + v[i-1]);
        return v[n];
    }
};
