//from : https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/


class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.size()!=s2.size())
            return false;
        int cnt=0,k=0,v=0;
        for(int i=0;s1.size()>i;++i)
            if(s1[i]!=s2[i]){
                ++cnt;
                if(cnt>2)
                    return false;
                1==cnt?k^=s1[i]:k^=s2[i];
                1==cnt?v^=s2[i]:v^=s1[i];
            }
        if((0==cnt||2==cnt)&&0==k&&0==v)
            return true;
        else
            return false;
    }
};
