//from : https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* cur=root;
        int ip=p->val,iq=q->val;
        while(true){
            if(ip==cur->val||iq==cur->val){
                return ip==cur->val?p:q;
            }
            else if((cur->val<ip&&cur->val>iq)||(cur->val>ip&&cur->val<iq))
                return cur;
            else if(cur->val>ip&&cur->val>iq)
                cur=cur->left;
            else
                cur=cur->right;
        }
        return NULL;
    }
};
