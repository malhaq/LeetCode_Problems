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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot == NULL){
            return true;
        }
        if(root == NULL){
            return false;
        }
        if(isSimilar(root,subRoot)){
            return true;
        }
        return isSubtree(root->right,subRoot) || isSubtree(root->left,subRoot);
        
    }
    bool isSimilar(TreeNode* root1,TreeNode* root2){
        if(root1 == NULL && root2 == NULL){
            return true;
        }
        if(root1 == NULL|| root2 == NULL){
            return false;
        }
        if(root1->val != root2 -> val){
            return false;
        }
        return isSimilar(root1->right,root2->right) && isSimilar(root1->left,root2->left);
    }
};