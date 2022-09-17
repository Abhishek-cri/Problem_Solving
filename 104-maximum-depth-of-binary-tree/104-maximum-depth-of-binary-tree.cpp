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
    
    int solve(TreeNode *root)
    {
        int left, right;
        
        if(root!=NULL)
        {
            left=solve(root->left);
            right=solve(root->right);
            
            return left>right?left+1:right+1;
        }
        else
          return 0;
    }
    
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        return solve(root);
        
    }
};