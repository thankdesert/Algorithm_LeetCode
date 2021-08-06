//from : https://leetcode.com/problems/reverse-integer/

#include <climits>

class Solution {
public:
    int reverse(int x) {
        string line = to_string(x), temp = "";
        for(int i = line.size()-1; i>=0; i--)
            temp.push_back(line[i]);
        if(x < 0)
            temp.pop_back();
        
        long long lx = stoll(temp);
        if(lx > INT_MAX)
            return 0;
        
        return x > 0 ? lx : -1*lx;
    }
};
