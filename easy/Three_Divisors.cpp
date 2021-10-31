//from : https://leetcode.com/problems/three-divisors/


class Solution {
private:
    bool isPrime(int n) {
        for (int i=2;n>=i*i;++i) {
            if (0==n%i){
                return false;
            }
        }
        return true;
    }
public:
    bool isThree(int n) {
        if(3>=n)
            return false;
        
        int s=sqrt(n);
        if(n==s*s&&isPrime(s))
            return true;
        
        return false;
    }
};
