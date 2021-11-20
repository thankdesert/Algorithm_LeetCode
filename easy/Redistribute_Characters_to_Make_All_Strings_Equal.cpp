//from : https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/


class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int lts[26]={0,};
        for(int i=0;words.size()>i;++i){
            for(int j=0;words[i].size()>j;++j)
                ++lts[words[i][j]-'a'];
        }
        int size=words.size();
        for(int i=0;26>i;++i){
            if(0==lts[i])
                continue;
            else if(0!=lts[i]%size)
                return false;
        }
        return true;
    }
};
