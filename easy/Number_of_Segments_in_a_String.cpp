//from : https://leetcode.com/problems/number-of-segments-in-a-string/



class Solution {
public:
    int countSegments(string s) {
        s.push_back(' ');
        int cnt=0;
        bool isSeg=false;
        for(int i=0;s.size()>i;++i){
            if(' '==s[i]){
                true==isSeg?cnt+=1:cnt;
                isSeg=false;
            }
            else{
                isSeg=true;
            }
        }
        return cnt;
    }
};
