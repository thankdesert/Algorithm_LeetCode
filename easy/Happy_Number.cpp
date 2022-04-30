//from : https://leetcode.com/problems/happy-number/


class Solution {
public:
    bool isHappy(int n) {
        int sum=n;
        unordered_map<int,int> um;
        do{
            um[sum]=1;
            int tmp=sum;
            sum=0;
            while(0<tmp){
                int k=tmp%10;
                sum+=k*k;
                tmp/=10;
            }
            if(1==sum)
                return true;
        }while(1!=um[sum]);
        return false;
    }
};
