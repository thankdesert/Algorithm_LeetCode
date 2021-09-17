//from : https://leetcode.com/problems/number-complement/


class Solution {
public:
    int findComplement(int num) {
        int sum=0;
        long long k=1;
        while(num){
            if(0==(num&1))
                sum+=k;
            num>>=1;
            k*=2;
        }
        return sum;
    }
};
