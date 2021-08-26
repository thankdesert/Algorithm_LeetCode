//from : https://leetcode.com/problems/power-of-three/



class Solution {
public:
    bool isPowerOfThree(int n) {
        for(long long k = 1; k <= n; k *= 3) {
            if(k == n)
                return true;
        }
        return false;
    }
};
