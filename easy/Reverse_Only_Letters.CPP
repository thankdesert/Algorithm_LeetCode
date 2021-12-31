//from : https://leetcode.com/problems/reverse-only-letters/


class Solution {
public:
    string reverseOnlyLetters(string s) {
        /*
        stack<char> st;
        for(int i=0;s.size()>i;++i){
            if(isalpha(s[i]))
                st.push(s[i]);
        }
        for(int i=0;s.size()>i;++i)
            if(isalpha(s[i])){
                s[i]=st.top();
                st.pop();
            }
        */
        int i=0,j=s.size()-1;
        while(true){
            while(s.size()>i&&!isalpha(s[i]))
                ++i;
            while(0<=j&&!isalpha(s[j]))
                --j;
            if(i>=j)
                break;
            char tmp=s[i];
            s[i]=s[j];
            s[j]=tmp;
            ++i;--j;
        }
        return s;
    }
};
