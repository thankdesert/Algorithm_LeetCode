//from : https://leetcode.com/problems/ugly-number/

class Solution {
public:
    bool isUgly(int n) {
        if(1>n)
            return false;
        while(1<n) {
            if(0==n%2){
                n/=2;
                continue;
            }
            else if(0==n%3){
                n/=3;
                continue;
            }
            else if(0==n%5) {
                n/=5;
                continue;
            }
            return false;
        }
        return true;
    }
};
