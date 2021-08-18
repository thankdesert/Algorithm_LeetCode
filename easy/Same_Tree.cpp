//from : https://leetcode.com/problems/same-tree/



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
    void inorder(TreeNode* root, vector<int>& v) {
        v.push_back(root->val);
        if(root->left != NULL)
            inorder(root->left, v);
        else
            v.push_back(100000);
        if(root->right != NULL)
            inorder(root->right, v);
        else
            v.push_back(100000);
    }
    
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> l;
        vector<int> r;
        if(p != NULL)
            inorder(p, l);
        if(q != NULL)
            inorder(q, r);
        
        if(l.size() != r.size())
            return false;
        
        for(int i = 0; i<l.size(); i++) {
            if(l[i] != r[i])
                return false;
        }
        
        return true;
    }
};
