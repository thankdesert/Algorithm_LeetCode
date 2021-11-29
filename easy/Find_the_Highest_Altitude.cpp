//from : https://leetcode.com/problems/find-the-highest-altitude/


class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max=0,cur=0;
        for(int item:gain){
            cur+=item;
            if(max<cur)
                max=cur;
        }
        return max;
    }
};
