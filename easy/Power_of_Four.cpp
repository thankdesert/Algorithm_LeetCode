//from : https://leetcode.com/problems/power-of-four/


class Solution {
public:
    bool isPowerOfFour(int n) {
        if(1==n)
            return true;
        while(1<n){
            if(4==n)
                return true;
            if(0!=n%4)
                return false;
            n/=4;
        }
        return false;
    }
};
