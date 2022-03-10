//from : https://leetcode.com/problems/maximum-depth-of-n-ary-tree/



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
    int dfs(Node* root,int level){
        if(NULL==root)
            return 0;
        int max=level;
        for(int i=0;root->children.size()>i;++i){
            int tmp=dfs(root->children[i],level+1);
            tmp>max?max=tmp:max;
        }
        return max;
    }
    int maxDepth(Node* root) {
        return dfs(root,1);
    }
};
