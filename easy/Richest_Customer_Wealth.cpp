//from : https://leetcode.com/problems/richest-customer-wealth/


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        for(int i=0;accounts.size()>i;++i){
            int sum=0;
            for(int j=0;accounts[i].size()>j;++j){
                sum+=accounts[i][j];
            }
            if(max<sum)
                max=sum;
        }
        return max;
    }
};
