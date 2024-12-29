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
    vector<int> preorder(Node* root) {
        vector<int> v;
        if(!root){
            return v;
        }
        preorder(v,root);
        return v;
    }
    void preorder(vector<int>&v,Node* root){
        v.push_back(root->val);
        int len = root->children.size();
        if(len == 0){
            return;
        }
        for (int i =0;i<len;i++){
            preorder(v,root->children[i]);
        }
        return;
    }
};