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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode *> q;
        q.push(root);
        bool flag=true;
        while(!q.empty()){
            int n=q.size();
            vector<int> res(n);
            for(int i=0;i<n;i++){
                TreeNode *curr_node=q.front();
                q.pop();
                int index=flag?i:n-i-1;
                res[index]=curr_node->val;
                if(curr_node->left) q.push(curr_node->left);
                if(curr_node->right) q.push(curr_node->right);
            }
            flag=!flag;
            result.push_back(res);
        }
        return result;
    }
};