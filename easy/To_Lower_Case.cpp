//from : https://leetcode.com/problems/to-lower-case/


class Solution {
public:
    string toLowerCase(string s) {
        //transform(s.begin(), s.end(), s.begin(), ::tolower);
        transform(s.begin(), s.end(), s.begin(), [](char c){
            return 'A'<=c&&'Z'>=c?c+'a'-'A':c;\
        });
        return s;
    }
};
