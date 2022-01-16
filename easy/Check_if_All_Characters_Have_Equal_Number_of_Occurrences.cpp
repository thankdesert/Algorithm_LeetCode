//from : https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/


class Solution {
public:
    bool areOccurrencesEqual(string s) {
        /*
        unordered_map<char,int> um;
        for(char item:s)
            ++um[item];
        int k=um[s[0]];
        for(auto item:um)
            if(item.second!=k)
                return false;
        return true;
        */
        
        int arr[26]={0,};
        for(char item:s)
            ++arr[item-'a'];
        int k=0;
        for(int item:arr)
            if(0!=item){
                k=item;
                break;
            }
        for(int item:arr)
            if(item&&k!=item)
                return false;
        return true;
    }
};
