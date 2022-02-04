//from : https://leetcode.com/problems/largest-substring-between-two-equal-characters/



class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        /*
        vector<vector<int>> v(26,vector<int>(0,0));
        for(int i=0;s.size()>i;++i)
            v[s[i]-'a'].push_back(i);
        int max=-1;
        
        for(int i=0;v.size()>i;++i){
            if(0==v[i].size())
                continue;
            if(max<v[i][v[i].size()-1]-v[i][0])
                max=v[i][v[i].size()-1]-v[i][0];
        }
        
        return -1==max?-1:max-1;
        */
        int indx[26];
        std::fill_n(indx, 26, -1);
        int len=-1;
        for(int i=0;s.size()>i;++i){
            char tmp=s[i];
            if(0<=indx[tmp-'a'])
                len=max(len,i-indx[tmp-'a']-1);
            else
                indx[tmp-'a']=i;
        }
        return len;
    }
};
