//from : https://leetcode.com/explore/challenge/card/august-leetcoding-challenge-2021/617/week-5-august-29th-august-31st/3957/


class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        for(int i=0;ops.size()>i;++i){
            ops[i][0]<m?m=ops[i][0]:m;
            ops[i][1]<n?n=ops[i][1]:n;
        }
        return m*n;
    }
};
