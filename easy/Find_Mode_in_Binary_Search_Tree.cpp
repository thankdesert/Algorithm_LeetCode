//from : https://leetcode.com/problems/find-mode-in-binary-search-tree/

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
    void dfs(TreeNode* root,unordered_map<int,int>& um,int* max){
        if(NULL==root)
            return;
        if(*max<++um[root->val])
            *max=um[root->val];
        dfs(root->left,um,max);
        dfs(root->right,um,max);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> um;
        int max=0;
        dfs(root,um,&max);
        vector<int> answer;
        for(auto item:um)
            if(max==item.second)
                answer.push_back(item.first);
        return answer;
    }
};
