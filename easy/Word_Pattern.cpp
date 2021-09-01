//from : https://leetcode.com/problems/word-pattern/


#include <unordered_map>

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, char> um;
        int visit[26]={0,};
        s.push_back(' ');
        string line="";
        int i, k;
        for(i=0,k=0;s.size()>i&&pattern.size()>k;++i){
            if(' '==s[i]){
                if(1==visit[pattern[k]-'a']&&um.end()==um.find(line))
                    return false;
                else if(0==visit[pattern[k]-'a']&&um.end()==um.find(line)) {
                    um.insert(make_pair(line, pattern[k]));
                    visit[pattern[k]-'a']=1;
                }
                else if(pattern[k]!=um[line])
                    return false;
                line.clear();
                k+=1;
                continue;
            }
            line.push_back(s[i]);
        }
        
        return i==s.size()&&k==pattern.size()?true:false;
    }
};
