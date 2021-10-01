//from : https://leetcode.com/problems/maximum-number-of-words-you-can-type/


class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int hit=0;
        text.push_back(' ');
        unordered_map<char, int> um;
        for(int i=0;brokenLetters.size()>i;++i)
            um[brokenLetters[i]]=1;
        for(int i=0, flag=0;text.size()>i;++i){
            if(1==flag){
                while(' '!=text[i])
                    ++i;
                flag=0;
                continue;
            }
            if(' '==text[i]){
                ++hit;
            }
            else if(1==um[text[i]])
                flag=1;
        }
        return hit;
    }
};
