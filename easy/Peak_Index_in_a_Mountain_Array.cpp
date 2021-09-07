//from : https://leetcode.com/problems/peak-index-in-a-mountain-array/


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        for(int i=1;arr.size()>i;++i){
            if(arr[i-1]>arr[i])
                return i-1;
        }
        return 0;
    }
};
