//from : https://leetcode.com/problems/plus-one/


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1] += 1;
        for(int i = digits.size() - 1; i>=1; i--) {
            if(digits[i] == 10) {
                digits[i] = 0;
                digits[i-1] += 1;
            }
            else
                break;
        }
        
        if(digits[0] == 10) {
            digits[0] = 0;
            digits.push_back(0);
            for(int i = digits.size() - 1; i >= 1; i--)
                digits[i] = digits[i - 1];
            digits[0] = 1;
        }
        
        return digits;
    }
};
