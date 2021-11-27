//from : https://leetcode.com/problems/determine-color-of-a-chessboard-square/


class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int k='a'%2;
        if(k==coordinates[0]%2)
            return (k+coordinates[1])%2;
        else
            return coordinates[1]%2;
    }
};
