//from : https://leetcode.com/problems/maximum-average-subarray-i/


class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0.0f,max;
        for(int i=0;k>i;++i)
            sum+=nums[i];
        max=sum;
        for(int i=1,j=k;nums.size()>j;++i,++j){
            sum=sum-nums[i-1]+nums[j];
            if(sum>max)
                max=sum;
        }
        return max/k;
    }
};
