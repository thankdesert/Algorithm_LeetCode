//from : https://leetcode.com/problems/three-consecutive-odds/


class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        for(int i=0;arr.size()>i;++i){
            if(1==arr[i]%2){
                if(arr.size()<=i+2)
                    return false;
                else if(1==arr[i+1]%2&&1==arr[i+2]%2)
                    return true;
            }
        }
        return false;
    }
};
