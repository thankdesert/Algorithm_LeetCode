//from : https://leetcode.com/problems/arranging-coins/


class Solution {
public:
    int arrangeCoins(int n) {
        int k=0;
        while(++k<=n){
            n-=k;
        }
        return k-1;
    }
};
