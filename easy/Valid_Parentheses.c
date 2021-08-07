//from : https://leetcode.com/problems/valid-parentheses/


#include <stack>
#include <unordered_map>

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> um;
        um[')'] = '('; um['}'] = '{'; um[']'] = '[';
        for(auto item : s) {
            if(item == ')' || item == '}' || item == ']') {
                if(!st.empty() && st.top() == um[item])
                    st.pop();
                else
                    return false;
            }
            else {
                st.push(item);
            }
        }
        
        return st.empty() ? true : false;
    }
};
