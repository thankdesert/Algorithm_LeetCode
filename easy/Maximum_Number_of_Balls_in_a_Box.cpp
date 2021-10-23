//from : https://leetcode.com/problems/maximum-number-of-balls-in-a-box/


class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int, int> um;
        int max=0;
        while(lowLimit<=highLimit){
            int tmp=lowLimit,sum=0;
            while(tmp>0){
                sum+=(tmp%10);
                tmp/=10;
            }
            ++um[sum];
            if(um[sum]>max)
                max=um[sum];
            ++lowLimit;
        }
        return max;
    }
};
