//from : https://leetcode.com/problems/replace-all-s-to-avoid-consecutive-repeating-characters/


class Solution {
public:
    string modifyString(string s) {
        if(1==s.size()){
            return '?'==s[0]?"a":s;
        }
        if('?'==s[0]){
            '?'==s[1]?s[0]='a':s[0]=((s[1]-'a'+1)%26)+'a';
        }
        for(int i=1;s.size()-1>i;++i){
            if('?'==s[i]){
                s[i]=((s[i-1]-'a'+1)%26)+'a';
                if(s[i]==s[i+1])
                    s[i]=((s[i+1]-'a'+1)%26)+'a';
            }
        }
        if('?'==s[s.size()-1])
            s[s.size()-1]=(s[s.size()-2]-'a'+1)%26+'a';
        return s;
    }
};
