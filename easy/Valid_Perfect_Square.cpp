//from : https://leetcode.com/problems/valid-perfect-square/



class Solution {
public:
    bool isPerfectSquare(int num) {
        for(long long i = 1; i<= num/2; i++) {
            if(i * i == num)
                return true;
            else if(i * i > num)
                return false;
        }
        return num == 1 ? true : false;
    }
};
