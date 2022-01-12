//from : https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/


class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0;
        for(string item:sentences){
            item.push_back(' ');
            int cur=0;
            for(char c:item){
                if(' '==c)
                    ++cur;
            }
            if(max<cur)
                max=cur;
        }
        return max;
    }
};
