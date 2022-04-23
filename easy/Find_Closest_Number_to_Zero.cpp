//from : https://leetcode.com/problems/find-closest-number-to-zero/


class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int min=INT_MAX,answer=0;
        for(int i=0;nums.size()>i;++i){
            if(min>abs(nums[i])){
                min=abs(nums[i]);
                answer=nums[i];
            }
            else if(min==abs(nums[i])){
                answer<nums[i]?answer=nums[i]:answer;
            }
        }
        return answer;
    }
};
