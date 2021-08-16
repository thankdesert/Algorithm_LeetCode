//from : https://leetcode.com/problems/jump-game/


class Solution {
public:
    bool canJump(vector<int>& nums) {
        int p = nums.size() - 1;
        // O(N)
        for (int i = nums.size() - 1; i >= 0; --i) {
            if (i + nums[i] >= p) {
                p = i;
            }
        }        
        return p == 0;
    }
};
