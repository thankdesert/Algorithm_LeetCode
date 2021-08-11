//from : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i, sum =0;
        for(i = 1; i<prices.size(); i++)
            if(prices[i-1] < prices[i])
                sum += prices[i] - prices[i-1];
        
        return sum;
    }
};
