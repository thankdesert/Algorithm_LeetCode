//from : https://leetcode.com/problems/first-unique-character-in-a-string/


class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26]={0,};
        for(int i=0;s.size()>i;++i)
            arr[s[i]-'a']+=1;
        for(int i=0;s.size()>i;++i) {
            if(1==arr[s[i]-'a'])
                return i;
        }
        return -1;
    }
};
