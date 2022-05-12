//from : https://leetcode.com/problems/consecutive-characters/


class Solution {
public:
    int maxPower(string s) {
        int max=1,cur=1;
        s.push_back('Z');
        for(int i=1;s.size()>i;++i){
            if(s[i]==s[i-1]){
                ++cur;
            }
            else{
                if(cur>max)
                    max=cur;
                cur=1;
            }
        }
        return max;
    }
};
