//from : https://leetcode.com/problems/palindrome-number/


#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        string line = to_string(x);
        for(int i = 0, j = line.size()-1; i < j; i++, j--) {
            if(line[i] != line[j])
                return false;
        }
        return true;
    }
};
