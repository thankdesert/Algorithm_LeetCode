//from : https://leetcode.com/problems/reverse-bits/


class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string line="";
        for(int i=0;32>i;i+=1){
            line.push_back(n%2+'0');
            n>>=1;
        }
        
        uint32_t answer=0;
        for(long long i=line.size()-1,k=1;0<=i;i-=1,k*=2)
            answer+=k*(line[i]-'0');
        
        return answer;
    }
};
