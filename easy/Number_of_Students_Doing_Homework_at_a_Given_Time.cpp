//from : https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/


class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int cnt=0;
        
        if(startTime.size()!=endTime.size())
            return -1;
        
        for(int i=0,size=startTime.size();size>i;++i){
            if(startTime[i]<=queryTime&&endTime[i]>=queryTime)
                ++cnt;
        }
        
        return cnt;
    }
};
