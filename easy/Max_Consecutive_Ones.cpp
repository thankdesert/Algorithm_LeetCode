//from : https://leetcode.com/explore/challenge/card/september-leetcoding-challenge-2021/638/week-3-september-15th-september-21st/3982/


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cur=0,max=0;
        for(int i=0;nums.size()>i;++i){
            if(1==nums[i])
                ++cur;
            else{
                if(max<cur)
                    max=cur;
                cur=0;
            }
        }
        return cur>max?cur:max;
    }
};
