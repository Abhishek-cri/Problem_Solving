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
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string> st;
        if(!root)
        {
            return st;
        }
        
        dfs(root, "", st);
        
        return st;    
    }
    
    
    void dfs(TreeNode *root, string current, vector<string>&paths)
    {
        current+= to_string(root->val);
        
        if(!root->left && !root->right)
        {
            paths.push_back(current);
            return;
        }
        if(root->left)
        {
            dfs(root->left, current + "->", paths);
        }
        if(root->right)
        {
            dfs(root->right, current + "->", paths);
        }
    }
    
    
};