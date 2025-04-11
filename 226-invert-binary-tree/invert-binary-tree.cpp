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
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr){
            return root;
        }
        swapNodes(root);
        return root;
        
    }
    void swapNodes(TreeNode* root){
        if(root==nullptr){
            return;
        }
        TreeNode* Rchild = root-> right;
        TreeNode* Lchild = root-> left;
        if(Rchild!=nullptr && Lchild!=nullptr){
            root->left = Rchild;
            root->right = Lchild;
            swapNodes(root->left);
            swapNodes(root->right);
        }else if (Rchild==nullptr&&Lchild!=nullptr){
            root->right = Lchild;
            root ->left = nullptr;
            swapNodes(root->right);
        }else if (Rchild!=nullptr&&Lchild==nullptr){
            root->left = Rchild;
            root ->right = nullptr;
            swapNodes(root->left);
        }
        return;
        
    }
};