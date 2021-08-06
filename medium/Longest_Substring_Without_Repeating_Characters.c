//from : https://leetcode.com/problems/longest-substring-without-repeating-characters/


#include <unordered_map>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int> um; //character, index
        int i, j = 0, cur_length = 0, max_length = 0;
        
        for(i = 0; i<s.size(); i++) {
            if(um.find(s[i]) == um.end()) {
                if(++cur_length > max_length)
                    max_length = cur_length;
                um.insert(make_pair(s[i], i));
                continue;
            }
            for( ; j < um[s[i]]; j++)
                um.erase(s[j]);
            cur_length = i - um[s[i]];
            j = um[s[i]] + 1;
            um[s[i]] = i;
        }
        return max_length;
    }
};

