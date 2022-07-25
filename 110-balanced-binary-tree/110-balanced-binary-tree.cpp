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
    
    
    int height(TreeNode *root)
    {
    
        if(root)
        {
           int left=height(root->left);
            int right=height(root->right);
            
            if(left>right)
            {
                return left+1;
            }
            else
            {
                return right+1;
            }
        }
        return 0;
    }
    
    
    bool isBalanced(TreeNode* root) {
        
        if(!root)
        {
            return true;
        }
        
        int x= height(root->left);
        int y=height(root->right);
        
        if(abs(x-y)>1)
        {
            return false;
        }
        
        int a=isBalanced(root->left);
        int b=isBalanced(root->right);
        if(!a || !b)
        {
            return false;
        }
        
        return true;
    }
};