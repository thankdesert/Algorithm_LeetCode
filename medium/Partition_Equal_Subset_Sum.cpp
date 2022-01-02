//from : https://leetcode.com/problems/partition-equal-subset-sum/


class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int item:nums)
            sum+=item;
        if(1==sum%2)
            return false;
        int n=nums.size(),k=sum/2;
        vector<vector<int>>dp(n+1,vector<int>(k+1,0));
        for(int i=1;n>=i;++i){
            for(int j=1;k>=j;++j){
                if(0>j-nums[i-1])
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i-1][j-nums[i-1]]+nums[i-1]>dp[i-1][j]?dp[i][j]=dp[i-1][j-nums[i-1]]+nums[i-1]:dp[i][j]=dp[i-1][j];
            }
        }
        return k==dp[n][k]?true:false;
    }
};
