//from : https://leetcode.com/problems/split-a-string-in-balanced-strings/


class Solution {
public:
    int balancedStringSplit(string s) {
        int answer=0;
        for(int i=0,cnt_l=0,cnt_r=0;s.size()>i;++i){
            'L'==s[i]?++cnt_l:++cnt_r;
            if(cnt_l==cnt_r){
                ++answer;
                cnt_l=0;
                cnt_r=0;
            }
        }
        return answer;
    }
};
