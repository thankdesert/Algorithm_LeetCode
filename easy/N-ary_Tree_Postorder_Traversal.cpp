//from : https://leetcode.com/problems/n-ary-tree-postorder-traversal/


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
    void postorder_search(Node* parent,vector<int>& answer){
        if(NULL==parent)
            return;
        vector<Node*>& children=parent->children;
        for(int i=0;children.size()>i;++i)
            postorder_search(children[i],answer);
        
        answer.push_back(parent->val);
        
    }
    vector<int> postorder(Node* root) {
        vector<int> answer;
        postorder_search(root,answer);
        return answer;
    }
};
