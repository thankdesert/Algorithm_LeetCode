//from : https://leetcode.com/problems/perfect-number/


class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 1){
            return false;
        }
        int root=sqrt(num);
        int sum=1;
        bool isSquare=(root*root==num);

        for (int i=2;root>=i;++i) {
            if(0==num%i) {
                sum+=i;
                if(i!=root||!isSquare)
                    sum+=num/i;
            }
        }

        if (sum==num) {
            return true;
        }
        return false;
    }
};
