//from : https://leetcode.com/problems/di-string-match/



class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> answer(s.size()+1,0);
        int min=0,max=s.size();
        s[0]=='I'?answer[0]=min++:answer[0]=max--;
        for(int i=1;answer.size()>i;++i){
            if('I'==s[i])
                answer[i]=min++;
            else
                answer[i]=max--;
        }
        return answer;
    }
};
