//from : https://leetcode.com/problems/pascals-triangle-ii/


class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> v(rowIndex+1);
        for(int i=0;rowIndex>=i;++i){
            v[i]=vector<int>(i+1,0);
            for(int j=0;i>=j;++j){
                if(0==j||i==j)
                    v[i][j]=1;
                else
                    v[i][j]=v[i-1][j-1]+v[i-1][j];
            }
        }
        return v[rowIndex];
    }    
};
