//from : https://leetcode.com/problems/check-if-the-sentence-is-pangram/


class Solution {
public:
    bool checkIfPangram(string sentence) {
        int check[26]={0,};
        int cnt=0;
        for(char item:sentence){
            if(0==check[item-'a']){
                check[item-'a']=1;
                ++cnt;
            }
            if(26==cnt)
                return true;
        }
        return false;
    }
};
