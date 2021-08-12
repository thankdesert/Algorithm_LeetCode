//from : https://leetcode.com/problems/n-th-tribonacci-number/


class Solution {
public:
    int tribonacci(int n) {
        int* fibo = new int[38]{0, 1, 1, 2, 0, };
        for(int i = 3; i <= n; i++)
            fibo[i] = fibo[i-3] + fibo[i-2] + fibo[i-1];
        return fibo[n];
    }
};
