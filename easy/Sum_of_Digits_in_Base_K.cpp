//from : https://leetcode.com/problems/sum-of-digits-in-base-k/


class Solution {
public:
    int sumBase(int n, int k) {
        /*
        string line="";
        while(n>0){
            if(0==n%k)
                line.push_back('0');
            else
                line.push_back(n%k+'0');
            n/=k;
        }
        int answer=0;
        for(char item:line){
            answer+=(item-'0');
        }
        */
        int answer=0;
        while(n>0){
            if(0!=n%k)
                answer+=n%k;
            n/=k;
        }
        return answer;
    }
};
