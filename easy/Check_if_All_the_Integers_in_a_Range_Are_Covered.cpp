//from : https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/


class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int arr[51]={0,};
        for(int i=left;right>=i;++i)
            arr[i]=1;
        for(int i=0;ranges.size()>i;++i){
            for(int j=ranges[i][0];ranges[i][1]>=j;++j)
                arr[j]=-1;
        }
        for(int i=left;right>=i;++i)
            if(1==arr[i])
                return false;
        return true;
    }
};
