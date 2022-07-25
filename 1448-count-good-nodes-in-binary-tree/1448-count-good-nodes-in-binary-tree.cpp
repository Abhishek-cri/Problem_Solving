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
    
    int good(TreeNode *root, int maxi,int res)
    {
        if(!root)
        {
            return res;
        }
        
        if(root->val >= maxi)
        {
            maxi=root->val;
            res++; 
        }
        
        return res + good(root->left,maxi,0) + good(root->right,maxi,0);
    }
    
    int goodNodes(TreeNode* root) {
        
       return  good(root,root->val,0);
    }
};