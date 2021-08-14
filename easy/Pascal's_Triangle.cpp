//from : https://leetcode.com/problems/pascals-triangle/


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        v[0].push_back(1);
        for(int i = 1; i<numRows; i++) {
            v[i] = vector<int>(i+1, 0);
            for(int j = 0; j < i+1; j++) {
                j - 1 >= 0 ? v[i][j] += v[i-1][j-1] : 1;
                j < i ? v[i][j] += v[i-1][j] : 1;
            }
        }
        return v;
    }
};
