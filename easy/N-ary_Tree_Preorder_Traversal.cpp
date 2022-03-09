//from : https://leetcode.com/problems/n-ary-tree-preorder-traversal/



/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void dfs(Node* root,vector<int>& answer){
        answer.push_back(root->val);
        for(int i=0;root->children.size()>i;++i)
            dfs(root->children[i],answer);
    }
    vector<int> preorder(Node* root) {
        vector<int> answer;
        if(NULL==root)
            return {};
        dfs(root,answer);
        return answer;
    }
};
