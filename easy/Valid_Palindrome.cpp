//from : https://leetcode.com/problems/valid-palindrome/



#include <algorithm>

class Solution {
public:
    bool isPalindrome(string s) {
        string line = "";
        for(auto item : s) {
            if((item >= 'A' && item <= 'Z') || (item >= 'a' && item <= 'z'))
                line.push_back(tolower(item));
            else if(item >= '0' && item <= '9')
                line.push_back(item);
        }
        
        for(int i = 0, j = line.size()-1; i <= j; i++, j--) {
            if(line[i] != line[j])
                return false;
        }
        
        return true;
    }
};
