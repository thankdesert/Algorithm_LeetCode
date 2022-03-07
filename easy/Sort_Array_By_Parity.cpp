//from : https://leetcode.com/problems/sort-array-by-parity/


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> answer(nums.size(),0);
        int i,j;
        for(i=0,j=0;nums.size()>i;++i){
            if(0==nums[i]%2)
                answer[j++]=nums[i];
        }
        for(i=0;nums.size()>i;++i){
            if(1==nums[i]%2)
                answer[j++]=nums[i];
        }
        return answer;
    }
};
