//from : https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/


class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        sort(chars.begin(),chars.end());
        int sum=0;
        for(int i=0;words.size()>i;++i){
            if(chars.size()<words[i].size())
                continue;
            sort(words[i].begin(),words[i].end());
            for(int j=0,k=0;words[i].size()>j;){
                bool flag=false;
                while(false==flag){
                    if(k>chars.size()||words[i][j]<chars[k])
                        flag=true;
                    else if(words[i][j]==chars[k])
                        break;
                    else
                        ++k;
                }
                if(true==flag)
                    break;
                ++j,++k;
                if(words[i].size()==j)
                    sum+=words[i].size();
            }
        }
        return sum;
    }
};
