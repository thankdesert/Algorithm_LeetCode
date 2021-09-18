//from : https://leetcode.com/problems/island-perimeter/


class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        vector<vector<int>> v(grid.size()+2, vector<int>(grid[0].size()+2, 9));
        for(int i=0;grid.size()>i;++i)
            for(int j=0;grid[0].size()>j;++j)
                grid[i][j]==1?v[i+1][j+1]=4:v[i+1][j+1]=9;
        
        int m_x[4]={0,0,-1,1};
        int m_y[4]={-1,1,0,0};
        
        for(int i=1;v.size()-1>i;++i){
            for(int j=1;v[0].size()-1>j;++j){
                if(9==v[i][j])
                    continue;
                for(int k=0;4>k;++k)
                    v[i+m_y[k]][j+m_x[k]]!=9?v[i][j]-=1:v[i][j];
            }
        }
        
        int sum=0;
        for(int i=1;v.size()-1>i;++i)
            for(int j=1;v[0].size()-1>j;++j)
                v[i][j]!=9?sum+=v[i][j]:sum;
        
        return sum;
    }
};
