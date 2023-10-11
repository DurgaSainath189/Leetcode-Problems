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
    int calculate_max_path(TreeNode* root,int &max_path){
        if(root==NULL) return 0;
        int left_path=max(0,calculate_max_path(root->left,max_path));
        int right_path=max(0,calculate_max_path(root->right,max_path));
        max_path=max(max_path,root->val+left_path+right_path);
        return root->val+max(left_path,right_path);
    }
    int maxPathSum(TreeNode* root) {
        int max_path=INT_MIN;
        calculate_max_path(root,max_path);
        return max_path;
    }
};