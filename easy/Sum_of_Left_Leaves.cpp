//from : https://leetcode.com/problems/sum-of-left-leaves/


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

#define LEFT 0
#define RIGHT 1

class Solution {
    int helper(TreeNode* root, int dct){
        if(NULL==root)
            return 0;
        if(NULL==root->left&&NULL==root->right){
            if(LEFT==dct)
                return root->val;
            else
                return 0;
        }
        return helper(root->left, LEFT)+helper(root->right, RIGHT);
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        return helper(root, RIGHT);
    }
};
