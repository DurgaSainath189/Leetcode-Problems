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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> array;
        if(root==NULL)
            return array;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int> res;
            for(int i=0;i<s;i++){
                TreeNode *curr_node=q.front();
                q.pop();
                if(curr_node->left!=NULL) q.push(curr_node->left);
                if(curr_node->right!=NULL) q.push(curr_node->right);
                res.push_back(curr_node->val);
            }
            array.push_back(res);
        }
        return array;
    }
};