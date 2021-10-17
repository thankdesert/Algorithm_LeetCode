//from : https://leetcode.com/problems/sort-an-array/

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        /*bubble_sort
        //O(N2)
        for(int i=nums.size()-1;0<i;--i){
            for(int j=0;i>j;++j){
                if(nums[j]>nums[j+1]){
                    int tmp=nums[j+1];
                    nums[j+1]=nums[j];
                    nums[j]=tmp;
                }
            }
        }
        */
     
        sort(nums.begin(), nums.end()); //O(Nlog(N))
        return nums;
    }
};
