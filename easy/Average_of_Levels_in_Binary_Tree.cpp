//from : 


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs_calc_level(TreeNode* root,int cur_level,int* max_level){
        if(NULL==root)
            return;
        if(cur_level>*max_level)
            *max_level=cur_level;
        dfs_calc_level(root->left,cur_level+1,max_level);
        dfs_calc_level(root->right,cur_level+1,max_level);
    }
    void dfs(TreeNode* root,vector<double>& v,vector<int>& cnt,int cur_level,int* max_level){
        if(NULL==root)
            return;
        if(cur_level>*max_level)
            *max_level=cur_level;
        v[cur_level]+=root->val;
        cnt[cur_level]+=1;
        dfs(root->left,v,cnt,cur_level+1,max_level);
        dfs(root->right,v,cnt,cur_level+1,max_level);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        /*naive
        vector<double> v(10000,0.0f);
        vector<int> cnt(10000,0);
        */
        int max_level=0;
        dfs_calc_level(root,0,&max_level);
        vector<double> v(max_level+1,0.0f);
        vector<int> cnt(max_level+1,0);
        dfs(root,v,cnt,0,&max_level);
        vector<double> answer(max_level+1,0.0f);
        
        for(int i=0;max_level>=i;++i){
            answer[i]=v[i]/cnt[i];
        }
        return answer;
    }
};
