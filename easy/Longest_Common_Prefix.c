//from : https://leetcode.com/problems/longest-common-prefix/


#include <climits>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i, k, min_length = INT_MAX;
        string line;
        for(auto item : strs) {
            if(item.size() < min_length)
                min_length = item.size();
        }
        
        for(k = 0; k < min_length; k++) {
            for(i = 0; i < strs.size() - 1; i++) {
                if(strs[i][k] != strs[i+1][k]) {
                    k = min_length;
                    break;
                }  
                if(i == strs.size()-2)
                    line.push_back(strs[0][k]);
            }
        }
        
        return strs.size() > 1 ? line : strs[0];
    }
};
