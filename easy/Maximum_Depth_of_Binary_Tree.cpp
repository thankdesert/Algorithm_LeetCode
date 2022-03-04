//from : https://leetcode.com/problems/maximum-depth-of-binary-tree/



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
/*
class Solution {
public:
    void dfs(TreeNode* root,int* depth,int cur_depth){
        if(NULL==root)
            return;
        if(*depth<cur_depth)
            *depth=cur_depth;
        dfs(root->left,depth,cur_depth+1);
        dfs(root->right,depth,cur_depth+1);
    }
    int maxDepth(TreeNode* root) {
        int depth=0;
        dfs(root,&depth,1);
        return depth;
    }
};
*/
class Solution {
    int max_depth = 0;
    void helper(TreeNode* root, int degree) {
        if(degree > max_depth)
            max_depth = degree;
        if(root->left != NULL)
            helper(root->left, degree + 1);
        if(root->right != NULL)
            helper(root->right, degree + 1);
    }
public:
    int maxDepth(TreeNode* root) {
        if(root != NULL)
            helper(root, 1);
        return max_depth;
    }
};
