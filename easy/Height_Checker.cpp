//from : https://leetcode.com/problems/height-checker/


#include <algorithm>

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> v=heights;
        sort(v.begin(),v.end());
        int cnt=0;
        for(int i=0;v.size()>i;++i)
            if(v[i]^heights[i])
                ++cnt;
        return cnt;
    }
};
