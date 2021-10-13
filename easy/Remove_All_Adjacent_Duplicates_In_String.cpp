//from : https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/


class Solution {
public:
    string removeDuplicates(string s) {
        string answer="";
        for(int i=1;s.size()>i;++i){
            if(s[i-1]==s[i]){
                int k=i-1;
                while(0<=k&&s.size()>i){
                    if(s[k]==s[i]){
                        s[k]='0';
                        s[i]='0';
                        --k;++i;
                    }
                    else if('0'==s[k])
                        --k;
                    else
                        break;
                }
                --i;
            }
        }
        
        for(int i=0;s.size()>i;++i)
            if('0'!=s[i])
                answer.push_back(s[i]);        
        return answer;
    }
};
