//from : https://leetcode.com/problems/jump-game/


class Solution {
public:
    bool canJump(vector<int>& nums) {
        bool* arr = new bool[nums.size()]{false, };
        for(int i = 1; i <= nums[0] && i < nums.size(); i++)
            arr[i] = true;
        
        for(int i = 1; i< nums.size(); i++) {
            if(arr[i] == true) {
                for(int j = i + 1; j <= i + nums[i] && j < nums.size(); j++)
                    arr[j] = true;
            }
        }
        
        return arr[nums.size() - 1] == true ? true : false;
    }
};
