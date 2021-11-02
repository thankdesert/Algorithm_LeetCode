//from : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0,j=numbers.size()-1;i<j;){
            int tmp=numbers[i]+numbers[j];
            if(target==tmp)
                return {i+1,j+1};
            else if(target<tmp)
                --j;
            else
                ++i;
        }
        return {6,6,6}; //input error
    }
};
