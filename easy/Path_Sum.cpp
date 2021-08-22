//from : https://leetcode.com/problems/path-sum/



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
    int flag = 0, target;
    void inorder(TreeNode* root, int sum) {
        if(flag == 1 || root == NULL)
            return;
        root->val += sum;
        if(root->val == target && root->left == NULL && root->right == NULL) {
            flag = 1;
            return;
        }
        inorder(root->left, root->val);
        inorder(root->right, root->val);
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        target = targetSum;
        inorder(root, 0);
        
        return flag == 1 ? true : false;
    }
};
