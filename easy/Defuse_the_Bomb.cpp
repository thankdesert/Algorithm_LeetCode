//from : https://leetcode.com/problems/defuse-the-bomb/



class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        if(0==k){
            for(int i=0;code.size()>i;++i)
                code[i]=0;
        }
        
        vector<int> tmp(code.size()*2,0);
        
        if(0>k){
            for(int i=0,n=code.size(),idx=code.size()-1;code.size()>i;++i,--idx){
                tmp[i]=code[idx];
                tmp[i+n]=code[idx];
            }
            for(int i=0;code.size()>i;++i){
                int sum=0;
                for(int j=1,target=abs(k);target>=j;++j)
                    sum+=tmp[i+j];
                code[i]=sum;
            }
            
            for(int i=0,j=code.size()-1;i<j;++i,--j){
                int tmp=code[i];
                code[i]=code[j];
                code[j]=tmp;
            }
        }
        else if(0<k){
            for(int i=0,n=code.size();code.size()>i;++i){
                tmp[i]=code[i];
                tmp[i+n]=code[i];
            }
            for(int i=0,target=abs(k);code.size()>i;++i){
                int sum=0;
                for(int j=1;target>=j;++j)
                    sum+=tmp[i+j];
                code[i]=sum;
            }            
        }
        
        return code;
    }
};
