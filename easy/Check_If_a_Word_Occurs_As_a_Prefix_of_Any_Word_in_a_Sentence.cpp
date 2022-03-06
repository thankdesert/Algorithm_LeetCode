//from : https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/



class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        sentence.push_back(' ');
        for(int i=0,k=1;sentence.size()>i;++i){
            if(sentence[i]!=searchWord[0]){
                while(' '!=sentence[i]){
                    ++i;
                    if(' '==sentence[i])
                        ++k;
                }
                continue;
            }
            for(int j=0,cnt=0;searchWord.size()>j;++i,++j){
                if(sentence[i]!=searchWord[j])
                    break;
                ++cnt;
                if(cnt==searchWord.size())
                    return k;
            }
            if(' '==sentence[i])
                ++k;
        }
        return -1;
    }
};
