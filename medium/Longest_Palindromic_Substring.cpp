//from : https://leetcode.com/problems/longest-palindromic-substring/


class Solution {
public:
    string longestPalindrome(string s) {
        int i, l, r, cur_length, max = 1;
        string line = "", temp;
        line.push_back(s[0]);
        for(i = 0; i < s.size() - 1; i++) {
            if(s[i] == s[i+1]) {
                temp = "";
                for(cur_length = 0, l = i,  r = i + 1; l >= 0 && r < s.size() && s[l] == s[r]; cur_length += 2, l--, r++);
                for(++l, --r; l <= r; l++)
                    temp.push_back(s[l]);
                if(cur_length > max) {
                    line = temp;
                    max = cur_length;
                }
            }
        }
        
        for(i = 1; i < s.size() - 1; i++) {
            if(s[i-1] == s[i+1]) {
                temp = "";
                for(cur_length = 1, l = i - 1,  r = i + 1; l >= 0 && r < s.size() && s[l] == s[r]; cur_length += 2, l--, r++);
                for(++l, --r; l <= r; l++)
                    temp.push_back(s[l]);
                if(cur_length > max) {
                    line = temp;
                    max = cur_length;
                }
            }
        }
        
        return line;
    }
};
