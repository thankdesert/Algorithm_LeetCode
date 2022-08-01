//from : https://leetcode.com/problems/unique-paths/


/*
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
*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[m][n];
        
        for (int i = 0; i < n; i++)
            dp[0][i] = 1;
        
        for (int i = 0; i < m; i++)
            dp[i][0] = 1;
        
        for (int i = 1; i < n; i++)
            for (int j = 1; j < m; j++)
                dp[j][i] = dp[j-1][i] + dp[j][i-1];
        
        return dp[m-1][n-1];
    }
};
