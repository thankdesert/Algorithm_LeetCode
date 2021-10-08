//from : https://leetcode.com/problems/complement-of-base-10-integer/


class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
            return 1;
        int answer=0,k=1;
        while(0<n){
            answer+=!(n&1)*k;
            n>>=1;
            k<<=1;
        }
        return answer;
    }
};
