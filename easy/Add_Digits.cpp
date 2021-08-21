//from : https://leetcode.com/problems/add-digits/



class Solution {
public:
    int addDigits(int num) {
        int temp;
        long long k;
        while(true) {
            if(num / 10 == 0)
                return num;
            for(k = 1; num / k > 0; k *= 10);
            k /= 10;
            for(temp = 0; k >= 1; temp += num / k, num -= (num/k)*k, k/= 10);
            num = temp;
        }
    }
};
