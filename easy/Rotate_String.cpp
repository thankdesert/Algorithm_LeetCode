//from : https://leetcode.com/problems/rotate-string/


class Solution {
public:
    bool rotateString(string s, string goal) {
        int size=s.size();
        int cur=0;
        for(int i=0;size>=i&&size>=cur;++i){
            for(int j=0,k=cur;s.size()>j;++j,++k){
                if(s[j]!=goal[k]){
                    goal.push_back(goal[cur++]);
                    break;
                }
                if(s.size()-1==j)
                    return true;
            }
        }
        return false;
    }
};
