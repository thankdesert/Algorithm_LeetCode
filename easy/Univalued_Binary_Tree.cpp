//from : https://leetcode.com/problems/univalued-binary-tree/


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
    void dfs(TreeNode* root,bool& is_univalued,int k){
        if(false==is_univalued||NULL==root)
            return;
        if(k!=root->val)
            is_univalued=false;
        dfs(root->left,is_univalued,k);
        dfs(root->right,is_univalued,k);
    }
    bool isUnivalTree(TreeNode* root) {
        bool is_univalued=true;
        dfs(root,is_univalued,root->val);
        return true==is_univalued?true:false;
    }
};
