//from : https://leetcode.com/problems/leaf-similar-trees/


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
    void dfs(TreeNode* root,vector<int>& v){
        if(NULL==root)
            return;
        if(NULL==root->left&&NULL==root->right){
            v.push_back(root->val);
            return;
        }
        dfs(root->left,v);
        dfs(root->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a;
        vector<int> b;
        dfs(root1,a);
        dfs(root2,b);
        
        if(a.size()!=b.size())
            return false;
        for(int i=0;a.size()>i;++i){
            if(a[i]!=b[i])
                return false;
        }
        return true;
    }
};
