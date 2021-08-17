//from : https://leetcode.com/problems/unique-paths-ii/



class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& oG) {
        for(int i = 0; i<oG.size(); i++)
            for(int j = 0; j<oG[0].size(); j++)
                oG[i][j] == 1 ? oG[i][j] = -1 : oG[i][j] = 0;
        
        
        if(oG[oG.size() - 1][oG[0].size() - 1] == -1 || oG[0][0] == -1)
            return 0;
        else
            oG[oG.size() - 1][oG[0].size() - 1] = 0;
        
        oG[0][0] = 1;
        for(int i = 0; i<oG[0].size(); i++) {
            if(oG[0][i] == -1)
                break;
            oG[0][i] = 1;
        }
        
        for(int i = 0; i<oG.size(); i++) {
            if(oG[i][0] == -1)
                break;
            oG[i][0] = 1;
        }
        
        
        for(int i = 1; i<oG.size(); i++) {
            for(int j = 1; j<oG[0].size(); j++) {
                if(oG[i][j] == -1)
                    continue;
                oG[i][j] = 0;
                oG[i-1][j] != -1 ? oG[i][j] += oG[i-1][j] : oG[i][j];
                oG[i][j-1] != -1 ? oG[i][j] += oG[i][j-1] : oG[i][j];
            }
        }
        
        return oG[oG.size() - 1][oG[0].size() - 1];                
    }
};
