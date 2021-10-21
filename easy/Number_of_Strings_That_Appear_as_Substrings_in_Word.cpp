//from : https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/


class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word, int cnt=0) {
        for(string item:patterns){
            if(std::string::npos!=word.find(item))
                ++cnt;
        }
        return cnt;
    }
};
