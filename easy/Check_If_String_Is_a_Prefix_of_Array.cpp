//from : https://leetcode.com/problems/check-if-string-is-a-prefix-of-array/


class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int tmp=0;
        string line="";
        for(int i=0;words.size()>i;++i){
            tmp+=words[i].size();
            line.append(words[i]);
            if(tmp==s.size())
                break;
            if(tmp>s.size())
                return false;
        }
        return s==line?true:false;
    }
};
