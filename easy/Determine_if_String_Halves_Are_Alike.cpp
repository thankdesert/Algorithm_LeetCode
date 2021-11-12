//from : https://leetcode.com/problems/determine-if-string-halves-are-alike/


class Solution {
public:
    bool halvesAreAlike(string s) {
        char spec_char[10]={'a','e','i','o','u','A','E','I','O','U'};
        unordered_map<char, int> vowels;
        for(char item:spec_char)
            vowels[item]=0;
        int cnt_l=0,cnt_r=0;
        for(int i=0;s.size()/2>i;++i){
            if(vowels.end()!=vowels.find(s[i]))
                ++cnt_l;
        }
        for(int i=s.size()/2;s.size()>i;++i){
            if(vowels.end()!=vowels.find(s[i]))
                ++cnt_r;
        }
        
        return cnt_l==cnt_r?true:false;
    }
};
