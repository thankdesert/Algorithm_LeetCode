//from : https://leetcode.com/problems/counting-bits/

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v(n+1, 0);
        if(n == 0)
            return {0};
        else if(n == 1)
            return {0, 1};
        v[0] = 0, v[1] = 1, v[2] = 1;
        for(int i = 3; i<=n; i++)
            v[i] = v[i/2] + v[i%2];
        return v;
    }
};

