//from : https://leetcode.com/problems/range-sum-of-bst/


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
    /*naive
    void dfs(TreeNode* root,int low,int high,int* sum){
        if(NULL==root)
            return;
        if(low<=root->val&&high>=root->val)
            *sum+=root->val;
        dfs(root->left,low,high,sum);
        dfs(root->right,low,high,sum);
    }
    */
    void dfs(TreeNode* root,int low,int high,int* sum){
        if(NULL==root)
            return;
        if(low<=root->val&&high>=root->val)
            *sum+=root->val;
        
        if(low>root->val)
            dfs(root->right,low,high,sum);
        else if(high<root->val)
            dfs(root->left,low,high,sum);
        else{
            dfs(root->right,low,high,sum);
            dfs(root->left,low,high,sum);
        }
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        dfs(root,low,high,&sum);
        return sum;
    }
};
