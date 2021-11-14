//from : https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/

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
    void dfs(TreeNode* root,vector<int>& v){
        if(NULL==root)
            return;
        v.push_back(root->val);
        dfs(root->left,v);
        dfs(root->right,v);
    }
    int findSecondMinimumValue(TreeNode* root) {
        if(NULL==root)
            return -1;
        vector<int> v;
        dfs(root,v);
        sort(v.begin(),v.end());
        int min=v[0];
        for(int i=0;v.size()>i;++i)
            if(min!=v[i])
                return v[i];
        return -1;
    }
};
