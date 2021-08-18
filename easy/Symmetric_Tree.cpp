//from : https://leetcode.com/problems/symmetric-tree/



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
    void LR(TreeNode* root, vector<int>& v) {
        v.push_back(root->val);
        if(root->left != NULL)
            LR(root->left, v);
        else
            v.push_back(1000);
        if(root->right != NULL)
            LR(root->right, v);
        else
            v.push_back(1000);
    }
    
    void RL(TreeNode* root, vector<int>& v) {
        v.push_back(root->val);
        if(root->right != NULL)
            RL(root->right, v);
        else
            v.push_back(1000);
        
        if(root->left != NULL)
            RL(root->left, v);
        else
            v.push_back(1000);
    }
    
public:
    bool isSymmetric(TreeNode* root) {
        vector<int> l;
        vector<int> r;
        if(root == NULL)
            return true;
        if(root->left != NULL)
            LR(root->left, l);
        if(root->right != NULL)
            RL(root->right, r);
        
        if(l.size() != r.size())
            return false;
        
        for(int i = 0; i<l.size(); i++)
            if(l[i] != r[i])
                return false;
        
        return true;
    }
};
