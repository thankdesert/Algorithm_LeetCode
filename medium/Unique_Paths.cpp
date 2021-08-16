//from : https://leetcode.com/problems/unique-paths/


class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> v(m, vector<int>(n, 1));
        
        for(int i = 1; i<m; i++) {
            for(int j = 1; j<n; j++)
                v[i][j] = v[i][j-1] + v[i-1][j];
        }
        
        return v[m - 1][n - 1];
    }
};
