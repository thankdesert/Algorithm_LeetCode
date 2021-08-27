//from : https://leetcode.com/problems/excel-sheet-column-number/



class Solution {
public:
    int titleToNumber(string ct) {
        int i, num = 0;
        long long k;
        for(i = ct.size()-1, k = 1; i >= 0; --i, k *= 26) {
            num += (ct[i] - 'A' + 1) * k;
        }
        return num;
    }
};
