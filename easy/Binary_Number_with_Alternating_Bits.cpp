//from : https://leetcode.com/problems/binary-number-with-alternating-bits/submissions/


#include <climits>

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int k=n;
        k>>=1;
        k^=n;
        while(k){
            if(0==(k&1))
                return false;
            k>>=1;
        }
        return true;
    }
};
