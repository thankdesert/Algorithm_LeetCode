//from : https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/


class Solution {
public:
    bool checkOnesSegment(string s) {
        bool flag=false;
        for(int i=0;s.size()>i;++i){
            if('1'==s[i]){
                if(true==flag)
                    return false;
                flag=true;
                while('1'==s[i])
                    ++i;
            }
        }        
        return true;
    }
};
