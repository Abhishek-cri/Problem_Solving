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
        
        vector<int>vec;
        stack<TreeNode* >q;
        if(!root)
        {
            return vec;
        }
        
        
        // vec.push_back(root->val);
        while(root || !q.empty())
        {
           
            if(root)
            {
                vec.push_back(root->val);
                q.push(root);
                root=root->left;
            }
            else
            {
                 root=q.top();
                 q.pop();
                root=root->right;
            }
            
        }
        return vec;
    }
};