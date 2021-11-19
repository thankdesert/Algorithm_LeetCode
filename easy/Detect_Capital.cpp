//from : https://leetcode.com/problems/detect-capital/


class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size()<=1)
            return true;
        int i=1;
        if(0!=isupper(word[0])&&0!=islower(word[1]))
            ++i;
        for(;word.size()>i;++i){
            if((0!=islower(word[i-1])&&0!=isupper(word[i]))||
               (0!=isupper(word[i-1])&&0!=islower(word[i]))
              )
                return false;
        }
        return true;
    }
};
