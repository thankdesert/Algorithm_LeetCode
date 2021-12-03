//from : https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/


class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt=0;
        for(int i=0;grid.size()>i;++i){
            for(int j=grid[0].size()-1;0<=j&&0>grid[i][j];--j)
                ++cnt;
        }
        return cnt;
    }
};
