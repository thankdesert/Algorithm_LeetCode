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
