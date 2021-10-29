//from : https://leetcode.com/problems/matrix-diagonal-sum/


class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0,j=0;mat.size()>i&&mat[0].size()>j;++i,++j){
            sum+=mat[i][j];
            mat[i][j]=0;
        }
        for(int i=0,j=mat[0].size()-1;mat.size()>i&&0<=j;++i,--j)
            sum+=mat[i][j];
        return sum;
    }
};
