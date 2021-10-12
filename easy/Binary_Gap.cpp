//from : https://leetcode.com/problems/binary-gap/


class Solution {
public:
    int binaryGap(int n) {
        int prev=0,cur=0,max=0;
        while(0==(n&1))
            n>>=1;
        while(0<n){
            if(1==(n&1)){
                if(max<cur-prev)
                    max=cur-prev;
                prev=cur;
            }
            n>>=1;
            ++cur;
        }
        return max;
    }
};
