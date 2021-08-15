//from : https://leetcode.com/problems/regular-expression-matching/


class Solution {
public:
    bool isMatch(string s, string p) {
        int i, j;
        vector<vector<bool>> v(s.size() + 1, vector<bool>(p.size() + 1, false));
        string str = " " + s;
        string ptn = " " + p;
        v[0][0] = true;
        for(i = 1; i < v[0].size(); i++)
            ptn[i] == '*' ? v[0][i] = v[0][i-2] : 1;
        
        for(i = 1; i < v.size(); i++) {
            for(j = 1; j < v[0].size(); j++) {
                if(str[i] == ptn[j] || ptn[j] == '.')
                    v[i][j] = v[i-1][j-1];
                else if(ptn[j] == '*') {
                    v[i][j] = v[i][j-2];
                    if(ptn[j-1] == '.' || ptn[j-1] == str[i])
                        v[i][j] = v[i][j] | v[i-1][j];
                }
                else
                    v[i][j] = false;
            }
        }
        
        return v[str.size() - 1][ptn.size() - 1];
    }
};
