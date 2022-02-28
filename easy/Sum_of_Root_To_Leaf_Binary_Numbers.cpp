//from : https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/


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
    void dfs(TreeNode* root,string line,int* answer){
        if(NULL==root)
            return;
        line.push_back(root->val+'0');
        if(NULL==root->left&&NULL==root->right){
            for(int i=0,k=(int)pow(2,line.size()-1);line.size()>i;++i,k/=2)
                *answer+=k*(line[i]-'0');
            return;
        }
        dfs(root->left,line,answer);
        dfs(root->right,line,answer);
    }
    int sumRootToLeaf(TreeNode* root) {
        int answer=0;
        dfs(root,"",&answer);
        return answer;
    }
};
