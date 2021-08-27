//from : https://leetcode.com/problems/largest-odd-number-in-string/



#include <string>

class Solution {
public:
    string largestOddNumber(string num) {
        int i;
        for(i = num.size()-1; i>=0; --i)
            if((num[i] - '0')%2 == 1)
                break;
        
        return num.substr(0, i + 1);
    }
};
