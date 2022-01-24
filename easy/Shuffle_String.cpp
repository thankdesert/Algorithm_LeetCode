//from : https://leetcode.com/problems/shuffle-string/


class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string line=s;
        for(int i=0;indices.size()>i;++i)
            line[indices[i]]=s[i];
        return line;
    }
};
