//from : https://leetcode.com/problems/longest-valid-parentheses/


#include <stack>

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<pair<char, int>> st;
        st.push(make_pair('*', 0));
        vector<int> v(s.size(), 0);
        
        for(int i = 0; i<s.size(); i++) {
            if(st.top().first == '(' && s[i] == ')') {
                v[st.top().second] = 1;
                v[i] = 1;
                st.pop();
            }
            else
                st.push(make_pair(s[i], i));
        }
        
        int max = 0, cur = 0;
        for(int i = 0; i<v.size(); i++) {
            if(v[i] != 1) {
                if(cur > max)
                    max = cur;
                cur = 0;
            }
            else
                cur += 1;
        }        
        
        return cur > max ? cur : max;
    }
};
