//from : https://leetcode.com/problems/second-largest-digit-in-a-string/



class Solution {
public:
    int secondHighest(string s) {
        int arr[10]={0,};
        for(int i=0;s.size()>i;++i)
            if(isdigit(s[i]))
                ++arr[s[i]-'0'];
        
        
        for(int i=9,k=1;0<=i;--i)
            if(0<arr[i]){
                if(1==k){
                    k=0;
                    continue;
                }
                return i;
            }
        return -1;
    }
};
