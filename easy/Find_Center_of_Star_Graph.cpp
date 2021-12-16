//from : https://leetcode.com/problems/find-center-of-star-graph/


class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> um;
        for(auto item:edges){
            if(++um[item[0]]>=2)
                return item[0];
            else if(++um[item[1]]>=2)
                return item[1];
        }
        return -1;
    }
};
