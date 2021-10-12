//from : https://leetcode.com/problems/reverse-words-in-a-string-iii/


class Solution {
public:
    string reverseWords(string s) {
        s.push_back(' ');
        string line="";
        string answer="";
        for(int i=0;s.size()>i;++i){
            if(' '==s[i]){
                for(int j=0,k=line.size()-1;j<k;++j,--k){
                    char tmp=line[j];
                    line[j]=line[k];
                    line[k]=tmp;
                }
                answer.append(line+' ');
                line="";
                continue;
            }
            line.push_back(s[i]);
        }
        answer.pop_back();
        return answer;
    }
};
