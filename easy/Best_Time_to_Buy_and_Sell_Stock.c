//from : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i, j, max;
        for(i = 0, j = 0, max = 0; j<prices.size(); j++) {
            if(prices[j] < prices[i]) {
                i = j;
                continue;
            }
            if(prices[j] - prices[i] > max)
                max = prices[j] - prices[i];
        }
        return max;
    }
};
