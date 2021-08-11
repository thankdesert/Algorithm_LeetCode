//from : https://leetcode.com/problems/min-cost-climbing-stairs/


class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);
        for(int i = 2; i < cost.size(); i++)
            cost[i - 2] + cost[i] < cost[i-1] + cost[i] ? cost[i] = cost[i - 2] + cost[i] : cost[i] = cost[i-1] + cost[i];
        return cost[cost.size() - 1];
    }
};
