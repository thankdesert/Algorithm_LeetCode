//from : https://leetcode.com/problems/move-zeroes/



class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        while(nums.size()>i){
            if(0!=nums[i])
                nums[j++]=nums[i];
            ++i;
        }
        while(nums.size()>j){
            nums[j]=0;
            ++j;            
        }
    }
};
