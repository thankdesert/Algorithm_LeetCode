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
    
    /*1d version
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int item:nums)
            sum+=item;
        if(1==sum%2)
            return false;
        sum/=2;
        vector<int> dp(sum+1,0);
        for(int i=0;nums.size()>i;++i){
            for(int j=sum;0<j;--j){
                if(j-nums[i]<0)
                    continue;
                if(dp[j-nums[i]]+nums[i]>dp[j])
                    dp[j]=dp[j-nums[i]]+nums[i];
            }
        }
        return sum==dp[sum]?true:false;
    }
    */
};
