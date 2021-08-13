//from : https://leetcode.com/problems/generate-parentheses/


class Solution {
    void rec(int l, int r, string line, vector<string>& v) {
        if(l == 0 && r == 0) {
            v.push_back(line);
            return;
        }
        
        if(l > 0)
            rec(l-1, r, line + '(', v);
        
        if(r > l)
            rec(l, r-1, line + ')', v);
    }
    
public:
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        rec(n, n, "", v);
        return v;
    }
};
