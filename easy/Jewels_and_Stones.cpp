//from : https://leetcode.com/problems/jewels-and-stones/


class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int map[255]={0,};
        for(char item:jewels)
            ++map[item];
        int answer=0;
        for(char item:stones)
            if(0<map[item])
                ++answer;
        return answer;
    }
};
