//from : https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/


class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a="",b="";
        for(string item:word1)
            a.append(item);
        for(string item:word2)
            b.append(item);
        return !a.compare(b);
    }
};
