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
    
    int solve(TreeNode *root, int &ans)
    {
        int left;
        int right;
        
        if(root)
        {
            left=solve(root->left, ans);
            right=solve(root->right, ans);
            
            ans=max(ans, left+right);
            
            return 1+max(left,right);
            
        }
        else
            return 0;
        
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        
        solve(root, ans);
        
        return ans;
        
    }
};