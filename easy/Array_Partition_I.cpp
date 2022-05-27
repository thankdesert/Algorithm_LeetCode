//from : https://leetcode.com/problems/array-partition-i/


class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        //1,2,2,5,6,6
        if (0 != nums.size() % 2) {
            return -1;
        }
        sort(nums.begin(), nums.end());
        int sum = 0;
        for(int i = 0; nums.size() > i; i+=2)
            sum += nums[i];
        return sum;
    }
};
