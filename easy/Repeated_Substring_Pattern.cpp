//from : https://leetcode.com/problems/repeated-substring-pattern/


/*
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int size=s.size();
        for(int i=1;size/2>=i;++i){
            if(0!=size%i)
                continue;
            string tmp=s.substr(0,i);
            for(int j=i;size>=j;j+=i){
                if(size==j)
                    return true;
                if(s.substr(j,i)!=tmp)
                    break;
            }
        }
        return false;
    }
};
*/

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string test = s + s;
        test.erase((s.size() * 2) - 1);
        return (test.find(s, 1)!=s.npos);
    }
};
