//from : https://leetcode.com/problems/implement-strstr/


class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle) == -1 ? -1 : haystack.find(needle);
    }
};
