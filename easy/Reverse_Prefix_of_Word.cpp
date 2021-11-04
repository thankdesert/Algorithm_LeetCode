//from : https://leetcode.com/problems/reverse-prefix-of-word/


class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0,j=0;
        while(word.size()>j&&ch!=word[j])
            ++j;
        if(j!=word.size()){
            while(i<j){
                char tmp=word[i];
                word[i]=word[j];
                word[j]=tmp;
                ++i,--j;
            }
        }
        return word;
    }
};
