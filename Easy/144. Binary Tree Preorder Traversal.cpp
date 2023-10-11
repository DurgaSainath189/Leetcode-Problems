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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> traversal;
        if(root==NULL) return traversal;
        stack<TreeNode *> st;
        st.push(root);
        while(!st.empty()){
            TreeNode *curr_node=st.top();
            st.pop();
            traversal.push_back(curr_node->val);
            if(curr_node->right!=NULL)
                st.push(curr_node->right);
            if(curr_node->left!=NULL)
                st.push(curr_node->left);
        }
        return traversal;
    }
};