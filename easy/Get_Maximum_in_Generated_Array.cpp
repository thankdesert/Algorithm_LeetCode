//from : https://leetcode.com/problems/get-maximum-in-generated-array/


class Solution {
public:
    int getMaximumGenerated(int n) {
        int* num = new int[101]{0, 1, 0, };
        int max;
        n < 1 ? max = 0 : max = 1;
        for(int i = 2; i<= n; i++) {
            i % 2 == 0 ? num[i] = num[i/2] : num[i] = num[i/2] + num[i/2 + 1];            
            num[i] > max ? max = num[i] : 1;
        }
        
        return max;
    }
};
