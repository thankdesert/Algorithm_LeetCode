//from : https://leetcode.com/problems/reshape-the-matrix/


class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size()*mat[0].size()!=r*c)
            return mat;
        vector<vector<int>> v(r,vector<int>(c,0));        
        for(int i=0;mat.size()>i;++i){
            for(int j=0;mat[0].size()>j;++j){
                int index=mat[0].size()*i+j;
                v[index/c][index%c]=mat[i][j];
            }
        }
        
        return v;
    }
};
