//from : https://leetcode.com/problems/subsets/


class Solution {
public:
    void dfs(vector<vector<int>>& answer,vector<int> tmp,vector<int>& nums,int index){
        if(nums.size()<=index){
            answer.push_back(tmp);
            return;
        }
        dfs(answer,tmp,nums,index+1);
        
        tmp.push_back(nums[index]);
        dfs(answer,tmp,nums,index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        /*
        vector<int> perm(nums.size(),0);
        vector<vector<int>> answer;
        for(int k=0;nums.size()>=k;++k){
            do {
                vector<int> tmp;
                for(int i=0;nums.size()>i;++i){
                    if(1==perm[i])
                        tmp.push_back(nums[i]);
                }
                answer.push_back(tmp);
            } while (prev_permutation(perm.begin(), perm.end()));
            if(nums.size()>k)
                perm[k]=1;
        }
        return answer;
        */
        vector<vector<int>> answer;
        dfs(answer,{},nums,0);
        return answer;
    }
};
