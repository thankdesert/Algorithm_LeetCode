//from : https://leetcode.com/problems/binary-search/


class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0,j=nums.size()-1,mid=(i+j)>>1;i<=j;mid=(i+j)>>1){
            if(target==nums[mid])
                return mid;
            else if(target>nums[mid])
                i=mid+1;
            else
                j=mid-1;      
        }
        return -1;
    }
};

/*
class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0,j=nums.size()-1;i<=j;){
            int tmp=(i+j)>>1;
            if(target==nums[tmp])
                return tmp;
            else if(target>nums[tmp])
                i=tmp+1;
            else
                j=tmp-1;
        }
        return -1;
    }
};
*/
