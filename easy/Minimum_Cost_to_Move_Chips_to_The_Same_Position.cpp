//from : https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/


class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int cnt_odd=0,cnt_even=0;
        for(int item:position){
            0==item%2?++cnt_even:++cnt_odd;
        }
        return cnt_odd<cnt_even?cnt_odd:cnt_even;
    }
};
