//from : https://leetcode.com/problems/image-smoother/


class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> v(img.size()+2,vector<int>(img[0].size()+2,-1));
        
        for(int i=0;img.size()>i;++i){
            for(int j=0;img[i].size()>j;++j){
                v[i+1][j+1]=img[i][j];
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
        
        //printf("**%d %d\n",img.size(),img[0].size());
        for(int i=1;img.size()>=i;++i){
            for(int j=1;img[i-1].size()>=j;++j){
                double sum=0.0f;
                int cnt=0;
                for(int k=i-1;i+1>=k;++k){
                    for(int t=j-1;j+1>=t;++t){
                        if(-1<v[k][t]){
                            sum+=v[k][t];
                            ++cnt;
                        }
                    }
                }
                //printf("(%d,%d):[%f/%d]\n",i,j,sum,cnt);
                img[i-1][j-1]=floor(sum/cnt);
            }
        }
        return img;
    }
};
