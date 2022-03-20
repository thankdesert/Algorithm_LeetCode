//from : https://leetcode.com/problems/counting-words-with-a-given-prefix/



class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        for(int i=0;words.size()>i;++i){
            if(pref.size()>words[i].size())
                continue;
            if(pref==words[i].substr(0,pref.size()))
                ++cnt;
        }
        return cnt;
    }
};
