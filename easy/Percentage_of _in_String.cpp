//from : https://leetcode.com/problems/percentage-of-letter-in-string/



class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count=0;
        for(char item : s) {
            if(item==letter)
                ++count;
        }
        return (count*100)/s.size();
    }
};
