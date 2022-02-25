//from : https://leetcode.com/problems/increasing-order-search-tree/


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
    void dfs(vector<int>& v,TreeNode* root){
        if(NULL==root)
            return;
        dfs(v,root->left);
        v.push_back(root->val);
        dfs(v,root->right);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        if(NULL==root)
            return NULL;
        vector<int> v;
        dfs(v,root);
        TreeNode* answer=new TreeNode(v[0],NULL,NULL);
        TreeNode* cur=answer;
        for(int i=1;v.size()>i;++i){
            cur->right=new TreeNode(v[i],NULL,NULL);
            cur=cur->right;
        }
        return answer;
    }
};
