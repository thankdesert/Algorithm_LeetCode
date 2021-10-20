//from : https://leetcode.com/problems/sort-an-array/

class Solution {
    /*quick sort
    //O(NlogN)
    void quickSort(int l, int r, vector<int>& nums){
        if(l>=r)
            return;
        int i=l,j=r;
        
        int pivot=nums[(l+r)/2];
        do{
            while(nums[i]<pivot)
                ++i;
            while(nums[j]>pivot)
                --j;
            if(i<=j){
                int tmp=nums[i];
                nums[i]=nums[j];
                nums[j]=tmp;
                ++i;--j;
            }
        }while(i<=j);
        
        if(l<j)
            quickSort(l, j, nums);
        if(i<r)
            quickSort(i, r, nums);
    }
    */
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
        //quickSort(0, nums.size()-1, nums);
        return nums;
    }
};
