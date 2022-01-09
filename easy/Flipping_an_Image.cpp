//from : https://leetcode.com/problems/flipping-an-image/


class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;image.size()>i;++i)
            for(int j=0;image[i].size()/2>j;++j){
                int tmp=image[i][j];
                image[i][j]=image[i][image[i].size()-1-j];
                image[i][image[i].size()-1-j]=tmp;
            }        
        
        for(int i=0;image.size()>i;++i)
            for(int j=0;image[i].size()>j;++j)
                1==image[i][j]?image[i][j]=0:image[i][j]=1;
        return image;
    }
};
