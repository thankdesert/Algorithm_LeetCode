//from : https://leetcode.com/problems/keyboard-row/submissions/


#include <algorithm>

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> v;
        int arr[26]={1,0,0,1,2,1,1,1,2,1,1,1,0,0,2,2,2,2,1,2,2,0,2,0,2,0};
        for(int i=0;words.size()>i;++i) {
            int j;
            for(j=1;words[i].size()>j;++j){
                if(arr[tolower(words[i][j-1])-'a']!=arr[tolower(words[i][j])-'a'])
                    break;
            }
            if(j==words[i].size())
                v.push_back(words[i]);
        }
        return v;
    }
};
