//from : https://leetcode.com/problems/ransom-note/



class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26]={0,};
        for(int i=0;magazine.size()>i;++i)
            arr[magazine[i]-'a']+=1;
        for(int i=0;ransomNote.size()>i;++i){
            if(0==arr[ransomNote[i]-'a'])
                return false;
            arr[ransomNote[i]-'a']-=1;
        }
        return true;
    }
};
