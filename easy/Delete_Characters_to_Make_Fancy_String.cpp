//from : https://leetcode.com/problems/delete-characters-to-make-fancy-string/



class Solution {
public:
    string makeFancyString(string s) {
        string line="";
        line.push_back(s[0]);
        int cnt=1;
        char prev=s[0];
        for(int i=1;s.size()>i;++i){
            if(prev==s[i])
                ++cnt;
            else{
                cnt=1;
                prev=s[i];
            }
            if(3<=cnt)
                continue;
            else{
                line.push_back(s[i]);
            }
        }
        return line;
    }
};
