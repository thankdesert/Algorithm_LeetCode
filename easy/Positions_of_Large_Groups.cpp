//from : https://leetcode.com/problems/positions-of-large-groups/submissions/


class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> v;
        
        for(int i=0,j=1;s.size()>j;){
            while(s.size()>j&&s[i]==s[j])
                ++j;
            if(j-i>2)
                v.push_back({i,j-1});
            i=j++;
        }
        
        return v;
    }
};
