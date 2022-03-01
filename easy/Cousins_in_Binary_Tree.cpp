//from : https://leetcode.com/problems/cousins-in-binary-tree/


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
    void dfs(int parent,TreeNode* root,vector<int>& v){
        if(NULL==root)
            return;
        v[root->val]=parent;
        dfs(root->val,root->left,v);
        dfs(root->val,root->right,v);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        vector<int> v(101,-1);
        dfs(-1,root,v);
        
        int x_depth=0,y_depth=0;
        
        for(int i=x;-1!=v[i];++x_depth,i =v[i]);
        for(int i=y;-1!=v[i];++y_depth,i=v[i]);
        
        return v[x]!=v[y]&&x_depth==y_depth?true:false;
    }
};
