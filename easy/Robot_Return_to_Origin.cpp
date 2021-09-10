//from : https://leetcode.com/problems/robot-return-to-origin/



#include <unordered_map>

class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char, int> um;
        for(int i=0;moves.size()>i;++i)
            um[moves[i]]+=1;
        if(0==um['U']-um['D']&&0==um['L']-um['R'])
            return true;
        else
            return false;
    }
};
