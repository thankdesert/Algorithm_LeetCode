//from : https://leetcode.com/problems/minimum-moves-to-convert-string/


class Solution {
public:
    int minimumMoves(string s) {
        int answer=0;
        for(int i=0;s.size()>i;++i){
            while(s.size()>i&&'O'==s[i])
                ++i;
            if(s.size()==i)
                break;
            s[i]='O';
            s.size()>i+1?s[i+1]='O':i;
            s.size()>i+2?s[i+2]='O':i;
            ++answer;
            i+=2;
        }
        return answer;
    }
};
