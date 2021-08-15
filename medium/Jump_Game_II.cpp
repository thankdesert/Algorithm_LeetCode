//from : https://leetcode.com/problems/jump-game-ii/



#include <climits>

class Solution {
public:
    int jump(vector<int>& nums) {
        int* d = new int[nums.size()]{0, };
        for(int i = 1; i<nums.size(); i++) {
            int min = INT_MAX;
            for(int k = 0; k < i; k++) {
                if(k + nums[k] >= i)
                    d[k] < min ? min = d[k] : min;
                min != INT_MAX ? d[i] = min + 1 : d[i];
            }
        }
        
        return d[nums.size() - 1];
    }
};
