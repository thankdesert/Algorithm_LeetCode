//from : https://leetcode.com/problems/truncate-sentence/


class Solution {
public:
    string truncateSentence(string s, int k) {
        int i=0,cnt=0;
        s.push_back(' ');
        while(s.size()>i&&k>cnt){
            while(' '!=s[i])
                ++i;
            ++i;
            ++cnt;
        }
        if(k>cnt)
            return "";
        return s.substr(0,i-1);
    }
};
