//from : https://leetcode.com/problems/minimum-distance-between-bst-nodes/


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
    int minDiffInBST(TreeNode* root) {
        vector<int> v;
        dfs(root,v);
        if(1>=v.size())
            return -1;
        sort(v.begin(),v.end());
        int diff=v[1]-v[0];
        for(int i=2;v.size()>i;++i)
            if(diff>v[i]-v[i-1])
                diff=v[i]-v[i-1];
        return diff;
    }
};
