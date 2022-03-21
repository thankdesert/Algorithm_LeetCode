//from : https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/submissions/



class Solution {
public:
    bool checkString(string s) {
        for(int i=1;s.size()>i;++i){
            if(s[i-1]>s[i])
                return false;
        }
        return true;
    }
};
