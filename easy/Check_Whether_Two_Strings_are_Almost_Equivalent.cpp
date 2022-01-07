//from : https://leetcode.com/problems/check-whether-two-strings-are-almost-equivalent/


class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int arr[26]={0,};
        for(char item:word1)
            ++arr[item-'a'];
        for(char item:word2)
            --arr[item-'a'];
        for(int item:arr)
            if(3<abs(item))
                return false;
        return true;
    }
};
