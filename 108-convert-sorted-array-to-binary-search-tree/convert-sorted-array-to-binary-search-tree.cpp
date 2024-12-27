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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return recursive(nums,0,nums.size()-1);
    }
private:
    TreeNode* recursive(vector<int>& nums, int start,int end){
        if(start>end){
            return nullptr;
        }
        int m = start + (end-start)/2;
        TreeNode* root = new TreeNode(nums[m]);
        root-> right = recursive(nums,m+1,end);
        root-> left = recursive(nums,start,m-1);
        return root;

    }
};
