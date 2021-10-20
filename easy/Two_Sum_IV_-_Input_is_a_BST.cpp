//from : https://leetcode.com/problems/two-sum-iv-input-is-a-bst/


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
    void inorder(TreeNode* root, vector<int>& v){
        if(NULL==root)
            return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        inorder(root, v);
        
        int sum=0;
        for(int i=0,j=v.size()-1;i<j;){
            if(k<v[i]+v[j])
                --j;
            else if(k>v[i]+v[j])
                ++i;
            else{
                sum=v[i]+v[j];
                break;
            }
        }
        return sum==k?true:false;
    }
};
