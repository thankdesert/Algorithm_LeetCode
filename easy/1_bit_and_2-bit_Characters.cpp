//from : https://leetcode.com/problems/1-bit-and-2-bit-characters/


class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int last_c=0;
        for(int i=0;bits.size()>i;){
            if(bits.size()-1==i&&!(bits[i]&0))
                return true;
            else
                false;
            if(0==(bits[i]|bits[i+1])){
                i+=2;
                last_c=0;
                continue;
            }
            else if(0==bits[i])
                i+=1;
            else if(1==bits[i])
                i+=2;
            else if(1==bits[i]&bits[i]+1)
                i+=2;
            last_c=1;
        }
        
        return last_c==0?true:false;
    }
};
