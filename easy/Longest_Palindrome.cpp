//from : https://leetcode.com/problems/longest-palindrome/



#include <unordered_map>
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> um;
        for(int i=0;s.size()>i;++i)
            um[s[i]]+=1;
        int max_value=0,max_key=0;
        for(auto item:um){
            if(max_value<item.second&&1==item.second%2){
                max_value=item.second;
                max_key=item.first;
            }
        }
        int answer=max_value;
        um[max_key]=0;
        for(auto item:um){
            if(1==item.second%2)
                answer+=item.second-1;
            else
                answer+=item.second;
        }
        return answer;
    }
};
