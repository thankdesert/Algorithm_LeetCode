//from : https://leetcode.com/problems/find-the-difference/


class Solution {
public:
    char findTheDifference(string s, string t) {
        int ans=0;
        s+=t;
        for(int i=0;s.size()>i;++i)
            ans^=s[i];
        return ans;
    }
};
