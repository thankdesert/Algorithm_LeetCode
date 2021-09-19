//from : https://leetcode.com/problems/combination-sum/



#include <algorithm>

class Solution {
public:
    void dfs(vector<int>& candidates, vector<vector<int>>& answer, vector<int> cur, int k, int sum, int target){
        if(target<sum)
            return;
        if(target==sum){
            answer.push_back(cur);
            return;
        }
        for(int i=candidates.size()-1;k<=i;--i){
            cur.push_back(candidates[i]);
            dfs(candidates, answer, cur, i, sum+candidates[i], target);
            cur.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> answer;
        vector<int> tmp;
        sort(candidates.begin(), candidates.end());
        dfs(candidates, answer, tmp, 0, 0, target);
        return answer;
    }
};
