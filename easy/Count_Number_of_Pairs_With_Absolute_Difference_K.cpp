//from : https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/


class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        /*complete search
        int cnt=0;
        for(int i=0;nums.size()-1>i;++i){
            for(int j=i+1;nums.size()>j;++j){
                if(k==nums[j]-nums[i]||k==nums[i]-nums[j])
                    ++cnt;
            }
        }
        return cnt;
        */
        int cnt[101]={0,};
        int answer=0;
        for (int n:nums)
            ++cnt[n];
        for (int i=k+1;101>i;++i)
            answer+=cnt[i]*cnt[i-k];
        return answer;
    }
};
