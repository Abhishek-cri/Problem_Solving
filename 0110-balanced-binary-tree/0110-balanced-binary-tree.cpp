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
        
        if(root)
        {
            left=solve(root->left);
            right=solve(root->right);
            
            if(left==-1 || right==-1)  return -1;
            if(abs(left-right)>=2)
            {
                return -1;
            }
            
            return 1+max(left, right);
        }
        
        return 0;
    }
    
    bool isBalanced(TreeNode* root) {
        
        // if(!root)
        // {
        //     return true;
        // }
        
        if (solve(root)==-1)
        {
            return false;
        }
        else
            return true;
        
        
    }
};