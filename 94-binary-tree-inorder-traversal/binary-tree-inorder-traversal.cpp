/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inTraversal(result, root);
        return result;
    }
    
    

    void inTraversal(vector<int>& res,TreeNode* root){
        if(root==nullptr)return;
        inTraversal(res,root->left);
        res.push_back(root->val);
        inTraversal(res,root->right);

    }





};