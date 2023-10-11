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
    void traversal(TreeNode* root,vector<int> &array){
        if(root==NULL)
            return;
        traversal(root->left,array);
        traversal(root->right,array);
        array.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> array;
        traversal(root,array);
        return array;
    }
};