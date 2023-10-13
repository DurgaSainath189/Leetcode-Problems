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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return isSymmetricTree(root->left,root->right);
    }
    bool isSymmetricTree(TreeNode* left_node,TreeNode* right_node){
        if(left_node==NULL || right_node==NULL){
            return left_node==right_node;
        }
        if(left_node->val!=right_node->val) return false;
        return isSymmetricTree(left_node->left,right_node->right) &&
               isSymmetricTree(left_node->right,right_node->left);
    }
};