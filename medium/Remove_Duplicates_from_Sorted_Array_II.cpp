//from : https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j;
        if(2>=nums.size())
            return nums.size();
        for(i=2,j=2;nums.size()>j;++i,++j){
            if(nums[i-2]==nums[i-1]&&nums[i-1]==nums[j]){
                while(nums.size()>j&&nums[i-1]==nums[j])
                    ++j;
            }
            if(nums.size()<=j)
                break;
            nums[i]=nums[j];
        }
        return i;
    }
};
