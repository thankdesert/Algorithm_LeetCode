//from : https://leetcode.com/problems/xor-operation-in-an-array/


class Solution {
public:
    int xorOperation(int n, int start) {
        int answer=start;
        for(int i=1;n>i;++i){
            answer^=(start+i*2);
        }
        return answer;
    }
};
