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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        root = trimLow(root,low);
        root = trimHigh(root,high);
        return root;
    }
    TreeNode* trimLow(TreeNode* root, int low){
        if(!root){
            return nullptr;
        }
        if(root-> val <low){
            return trimLow(root->right,low);
        }
        root->left = trimLow(root->left,low);
        return root;
    }

    TreeNode* trimHigh(TreeNode* root, int high){
        if(!root){
            return nullptr;
        }
        if(root-> val>high){
            return trimHigh(root->left,high);
        }
        root->right = trimHigh(root->right,high);
        return root;
    }

};