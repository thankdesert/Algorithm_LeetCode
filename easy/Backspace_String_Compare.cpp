//from : https://leetcode.com/problems/backspace-string-compare/


class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st_s;
        stack<char> st_t;
        int i=0;
        
        while(s.size()>i&&'#'==s[i])
            ++i;
        for(;s.size()>i;++i){
            if('#'==s[i]){
                if(true==st_s.empty())
                    continue;
                st_s.pop();
            }                
            else
                st_s.push(s[i]);
        }
        i=0;
        while(t.size()>i&&'#'==t[i])
            ++i;
        for(;t.size()>i;++i){
            if('#'==t[i]){
                if(true==st_t.empty())
                    continue;
                st_t.pop();
            }
            else
                st_t.push(t[i]);
        }
        
        if(st_s.size()!=st_t.size())
            return false;
        
        while(false==st_s.empty()){
            if(st_s.top()!=st_t.top())
                return false;
            st_s.pop();
            st_t.pop();
        }
        return true;
    }
};
