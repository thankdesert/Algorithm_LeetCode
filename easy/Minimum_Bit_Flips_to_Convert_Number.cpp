//from : https://leetcode.com/problems/minimum-bit-flips-to-convert-number/



class Solution {
public:
    int minBitFlips(int start, int goal) {
        /*
        int tmp=start^goal,answer=0;
        
        while(0<tmp){
            if(0b001==(tmp&1))
                ++answer;
            tmp>>=1;
        }
        return answer;
        */
        return __builtin_popcount((start^goal));
    }
};
