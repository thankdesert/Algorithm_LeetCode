//from : https://leetcode.com/problems/hamming-distance/



class Solution {
public:
    int hammingDistance(int x, int y) {
        x^=y;
        int cnt=0;
        while(x){
            cnt+=x&1;
            x>>=1;
        }
        
        return cnt;
    }
};
