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
    
    int left_solve(TreeNode *root)
    {
        int left, right;
        
        if(root)
        {
            left=left_solve(root->left);
            right=left_solve(root->right);
            
            return 1+max(left,right);
        }
        return 0;
    }
       int right_solve(TreeNode *root)
    {
        int left, right;
        
        if(root)
        {
            left=right_solve(root->left);
            right=right_solve(root->right);
            
            return 1+max(left,right);
        }
        return 0;
    }
    
    
    bool isBalanced(TreeNode* root) {
        int x,y;
        if(!root) return true;
       if(root)
       {     
        x=left_solve(root->left);
        y=right_solve(root->right);
        
        if(abs(x-y)>=2)
        {
            return false;
        }
        
        bool x=isBalanced(root->left);
        bool y= isBalanced(root->right);
        if(!x || !y) return false;
           
       }
        
       return true; 
    }
};