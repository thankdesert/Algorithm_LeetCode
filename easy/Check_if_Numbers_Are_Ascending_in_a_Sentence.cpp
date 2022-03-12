//from : https://leetcode.com/problems/check-if-numbers-are-ascending-in-a-sentence/



class Solution {
public:
    bool areNumbersAscending(string s) {
        int last=0;
        for(int i=0;s.size()>i;++i){
            if(' '==s[i]||isalpha(s[i]))
                continue;
            string tmp="";
            while(s.size()>i&&isdigit(s[i]))
                tmp.push_back(s[i++]);
            if(last>=stoi(tmp))
                return false;
            else
                last=stoi(tmp);
        }
        return true;
    }
};
