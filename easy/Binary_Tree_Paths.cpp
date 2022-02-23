//from : https://leetcode.com/problems/binary-tree-paths/


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
    void dfs(TreeNode* root,vector<string>& answer,vector<string> line){
        line.push_back(to_string(root->val));
        line.push_back("->");
        if(NULL==root->left&&NULL==root->right){
            line.pop_back();
            string tmp="";
            for(string item:line)
                tmp.append(item);
            answer.push_back(tmp);
            return;
        }
        if(NULL!=root->left)
            dfs(root->left,answer,line);
        if(NULL!=root->right)
            dfs(root->right,answer,line);
        return;
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> answer;
        if(NULL==root)
            return answer;
        vector<string> line;
        dfs(root,answer,line);
        
        return answer;
    }
};
