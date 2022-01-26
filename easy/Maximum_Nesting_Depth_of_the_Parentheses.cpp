//from : https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/


class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int max=0;
        for(int i=0;s.size()>i;++i){
            if('('==s[i]){
                st.push('(');
                if(st.size()>max)
                    max=st.size();
            }
            else if(')'==s[i]){
                st.pop();
            }
            else
                continue;
        }
        return max;
    }
};
