//from : https://leetcode.com/problems/student-attendance-record-i/


class Solution {
public:
    bool checkRecord(string s) {
        bool ab=false;
        int cons=0;
        for(int i=0;s.size()>i;++i){
            if('A'==s[i]){
                cons=0;
                if(true==ab)
                    return false;
                else
                    ab=true;
            }
            else if('L'==s[i]){
                if(3==++cons)
                    return false;
            }
            else
                cons=0;
        }
        return true;
    }
};
