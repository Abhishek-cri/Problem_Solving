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
    
    int solve(TreeNode *root, int &res)
    {
         if(!root)
        {
            return 0;
        }
        
        int left=solve(root->left,res);
        int right=solve(root->right,res);
        
        int temp=max(left,right)+1;
         res=max(res,left+right);
        // res=max(ans,res);
        
        return temp;
        
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        
       int res=INT_MIN;
      solve(root,res); 
        return res;
        
    }
};