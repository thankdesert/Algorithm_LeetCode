//from : https://leetcode.com/problems/teemo-attacking/


class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        long long int sum=timeSeries.size()*duration;
        for(int i=1;timeSeries.size()>i;++i){
            int tmp=timeSeries[i]-timeSeries[i-1];
            if(duration>tmp)
                sum-=(duration-tmp);
        }
        return sum;
    }
};
