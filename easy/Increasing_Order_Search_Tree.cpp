//from : https://leetcode.com/problems/increasing-order-search-tree/


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
    void dfs(vector<int>& v,TreeNode* root){
        if(NULL==root)
            return;
        dfs(v,root->left);
        v.push_back(root->val);
        dfs(v,root->right);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        if(NULL==root)
            return NULL;
        vector<int> v;
        dfs(v,root);
        TreeNode* answer=new TreeNode(v[0],NULL,NULL);
        TreeNode* cur=answer;
        for(int i=1;v.size()>i;++i){
            cur->right=new TreeNode(v[i],NULL,NULL);
            cur=cur->right;
        }
        return answer;
    }
};


/*
class Solution {
public:
    void dfs(TreeNode* root,multiset<int>& st){
        if(NULL==root)
            return;
        st.insert(root->val);
        dfs(root->left,st);
        dfs(root->right,st);
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(NULL==root)
            return NULL;
        multiset<int> st;
        dfs(root,st);
        TreeNode* answer=NULL;
        TreeNode* parent=NULL;
        for(auto item:st){
            if(NULL==answer){
                answer=new TreeNode(item,NULL,NULL);
                parent=answer;
                continue;
            }
            parent->left=NULL;
            parent->right=new TreeNode(item,NULL,NULL);
            parent=parent->right;
        }
        return answer;
    }
};
*/
