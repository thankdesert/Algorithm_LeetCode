//from : https://leetcode.com/problems/invert-binary-tree/


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
    void dfs(TreeNode* root,TreeNode** answer){
        if(NULL==root)
            return;
        if(NULL!=root->left){
            (*answer)->right=new TreeNode(root->left->val,NULL,NULL);
            dfs(root->left,&((*answer)->right));
        }
        if(NULL!=root->right){
            (*answer)->left=new TreeNode(root->right->val,NULL,NULL);
            dfs(root->right,&((*answer)->left));
        }
        return;
    }
    
    TreeNode* invertTree(TreeNode* root) {
        if(NULL==root)
            return NULL;
        TreeNode* answer=new TreeNode(root->val,NULL,NULL);
        dfs(root,&answer);
        return answer;
    }
};
