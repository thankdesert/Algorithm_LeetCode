//from : https://leetcode.com/problems/longer-contiguous-segments-of-ones-than-zeros/


class Solution {
public:
    bool checkZeroOnes(string s) {
        s.push_back('*');
        int cur_len=1;
        int arr[2]={0,0};
        for(int i=1;s.size()>i;++i){
            if(s[i]!=s[i-1]){
                int k;
                if('0'==s[i-1])
                    k=0;
                else
                    k=1;
                if(arr[k]<cur_len)
                    arr[k]=cur_len;
                cur_len=1;
            }
            else
                ++cur_len;
        }
        return arr[0]<arr[1]?true:false;
    }
};
