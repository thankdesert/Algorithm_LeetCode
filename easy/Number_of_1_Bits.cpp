//from : https://leetcode.com/problems/number-of-1-bits/


class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
        while(n){
            cnt+=n&1;
            n>>=1;
        }
        return cnt;
    }
};
