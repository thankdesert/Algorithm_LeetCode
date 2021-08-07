//from : https://leetcode.com/problems/string-to-integer-atoi/


#include <string>
#include <climits>

class Solution {
public:
    int myAtoi(string s) {
        int i, j, is_pos = 1;
        long long answer;
        for(i=0; s[i] == ' '; i++);
        if(s[i] == '+' || s[i] == '-') {
            s[i] == '+' ? is_pos = 1 : is_pos = -1;
            i += 1;
        }
        
        for(j = i; j<s.size(); j++) {
            if(s[j] < '0' || s[j] > '9')
                break;    
        }
        for(; s[i]== '0' && i<s.size(); i++);
        
        if(j - i <= 0)
            return 0;
        else if(j - i >= 12)
            return is_pos == 1 ? INT_MAX : INT_MIN;
        
        answer = stoll(s.substr(i, j - i)) * is_pos;        
        if(answer >= INT_MAX)
            answer = INT_MAX;
        else if(answer <= INT_MIN)
            answer = INT_MIN;
        
        return answer;
    }
};
