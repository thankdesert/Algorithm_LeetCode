//from : https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/


class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> answer;
        sort(nums.begin(), nums.end());
        int i=0,j=nums.size()-1,l_sum=0,r_sum=0;
        while(i<=j){
            if(l_sum<=r_sum&&l_sum+nums[i]<r_sum){
                l_sum+=nums[i++];
            }
            else{
                answer.push_back(nums[j]);
                r_sum+=nums[j--];
            }
        }
        
        return answer;
    }
};
