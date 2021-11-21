//from : https://leetcode.com/problems/remove-outermost-parentheses/


class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> stk;
        string answer="";
        for(int i=0;s.size()>i;++i){
            if(1==stk.size()&&')'==s[i])
                stk.pop();
            else{
                if(true==stk.empty()){
                    stk.push(s[i]);
                    continue;
                }
                else if('('==stk.top()&&')'==s[i])
                    stk.pop();
                else
                    stk.push(s[i]);
                answer.push_back(s[i]);
            }
        }
        return answer;
    }
};
