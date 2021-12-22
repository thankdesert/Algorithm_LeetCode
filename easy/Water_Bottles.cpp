//from : https://leetcode.com/problems/water-bottles/


class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int cnt=numBottles;
        int emptyBottles=0;
        do{
            emptyBottles+=numBottles;
            numBottles=emptyBottles/numExchange;
            cnt+=numBottles;
            emptyBottles%=numExchange;
        }while(0<numBottles);
        return cnt;
    }
};
