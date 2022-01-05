//from : https://leetcode.com/problems/minimum-time-to-type-word-using-special-typewriter/


class Solution {
public:
    int minTimeToType(string word) {
        int cnt=0;
        word='a'+word;
        for(int i=1;word.size()>i;++i){
            if(13>abs(word[i]-word[i-1]))
                cnt+=abs(word[i]-word[i-1])+1;
            else
                cnt+=26-abs(word[i]-word[i-1])+1;
        }
        return cnt;
    }
};
