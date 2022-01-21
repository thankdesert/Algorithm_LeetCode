//from : https://leetcode.com/problems/license-key-formatting/


class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int size=0;
        for(int i=0;s.size()>i;++i)
            '-'!=s[i]?++size:size;
        if(0==size)
            return "";
        int fg=size%k;
        int i,cnt;
        string line="";
        for(i=0,cnt=0;fg>cnt;++i){
            if('-'==s[i])
                continue;
            if(isalpha(s[i]))
                line.push_back(toupper(s[i]));
            else
                line.push_back(s[i]);
            ++cnt;
        }
        if(0<fg)
            line.push_back('-');
        for(cnt=0;s.size()>i;++i){
            if('-'==s[i])
                continue;
            if(isalpha(s[i]))
                line.push_back(toupper(s[i]));
            else
                line.push_back(s[i]);
            ++cnt;
            
            if(k==cnt){
                line.push_back('-');
                cnt=0;
                continue;
            }
        }
        
        if('-'==line[line.size()-1])
            line.pop_back();
        
        return line;
    }
};
