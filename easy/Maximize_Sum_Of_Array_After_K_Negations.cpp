//from : https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/


//ちょっと乱暴なコードです。
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        for(int i=0;k>i;++i){
            sort(nums.begin(),nums.end());
            nums[0]=-nums[0];
        }
        int sum=0;
        for(int item:nums)
            sum+=item;
        return sum;
    }
};
