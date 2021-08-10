//from : https://leetcode.com/problems/length-of-last-word/


class Solution {
public:
    int lengthOfLastWord(string s) {
        int i, j;
        for(i = s.size()-1; i >= 0 && s[i] == ' '; i--);
        for(j = i; j >= 0 && s[j] != ' '; j--);
        return i - j;
    }
};
