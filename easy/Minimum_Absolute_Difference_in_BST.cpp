//from : https://leetcode.com/problems/minimum-absolute-difference-in-bst/


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
    int getMinimumDifference(TreeNode* root) {
        vector<int> v;
        const std::function<void(TreeNode*)> helper=[&v, &helper](TreeNode* root){
            if(NULL==root)
                return;
            v.push_back(root->val);
            helper(root->left);
            helper(root->right);
        };
        helper(root);
        sort(v.begin(), v.end());
        int answer=INT_MAX;
        for(int i=1;v.size()>i;++i)
            answer>v[i]-v[i-1]?answer=v[i]-v[i-1]:answer;
        return answer;
    }
};
