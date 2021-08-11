//from : https://leetcode.com/problems/sqrtx/


class Solution {
public:
    int mySqrt(int x) {
        long long k;
        for(k = 1; k * k <= x; k++);
        return --k;
    }
};
