//from : https://leetcode.com/problems/flood-fill/



class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<int>> v(image.size()+2,vector<int>(image[0].size()+2,-1));
        
        for(int i=0;image.size()>i;++i){
            for(int j=0;image[i].size()>j;++j){
                v[i+1][j+1]=image[i][j];
            }
        }
        
        /*
        for(int i=0;v.size()>i;++i){
            for(int j=0;v[i].size()>j;++j){
                printf("%d ",v[i][j]);
            }
            printf("\n");
        }
        */
        
        
        int tmp=image[sr][sc];
        int move_x[4]={0,0,-1,1};
        int move_y[4]={-1,1,0,0};
        
        queue<pair<int,int>> q;
        q.push(make_pair(sr+1,sc+1));
        while(!q.empty()){
            if(tmp!=v[q.front().first][q.front().second]){
                q.pop();
                continue;
            }
            v[q.front().first][q.front().second]=-1;
            image[q.front().first-1][q.front().second-1]=newColor;
                
            for(int i=0;4>i;++i)
                q.push(make_pair(q.front().first+move_x[i],q.front().second+move_y[i]));
            
            q.pop();
        }
        
        return image;
    }
};
