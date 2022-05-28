//from : https://leetcode.com/problems/maximum-number-of-balloons/


class Solution {
public:
    int maxNumberOfBalloons(string text) {
        #define SMALL_A     0
        #define SMALL_B     1
        #define SMALL_L     2
        #define SMALL_N     3
        #define SMALL_O     4
        #define NOTHING     5
        
        vector<int> um(6, 0);
        
        for (char item : text) {
            int tmp;
            switch (item) {
                case 'a':
                    tmp = SMALL_A;
                    break;
                case 'b':
                    tmp = SMALL_B;
                    break;
                case 'l':
                    tmp = SMALL_L;
                    break;
                case 'n':
                    tmp = SMALL_N;
                    break;
                case 'o':
                    tmp = SMALL_O;
                    break;
                default:
                    tmp = NOTHING;
            }
            um[tmp]++;
        }
        um[SMALL_L]/=2;
        um[SMALL_O]/=2;
        
        int     min            = INT_MAX;
        for (int i = 0; NOTHING > i; ++i) {
            if (min > um[i]) {
                min = um[i];
            }
        }
        
        return min;
        
    }
};
