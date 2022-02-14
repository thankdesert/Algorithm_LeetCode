//from : https://leetcode.com/problems/range-sum-query-immutable/


class NumArray {
public:
    /*brute force
    vector<int> numArray;
    NumArray(vector<int>& nums) {
        this->numArray=nums;
    }
    
    int sumRange(int left, int right) {
        int sum=0;
        for(int i=left;right>=i;++i)
            sum+=numArray[i];
        return sum;
    }
    */
    
    //sum array
    vector<int> sum;
    NumArray(vector<int>& nums){
        sum=vector<int>(nums.size()+1,0);
        for(int i=1;sum.size()>i;++i)
            sum[i]=sum[i-1]+nums[i-1];
    }
    
    int sumRange(int left,int right){
        return sum[right+1]-sum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
