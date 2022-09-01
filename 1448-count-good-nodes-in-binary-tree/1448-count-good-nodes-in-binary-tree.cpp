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
    
    int solve(TreeNode * root,int maxi, int res)
    {
       if(!root) return 0;
        
        if(root->val>=maxi)
        {
            maxi=max(maxi,root->val);
            res+=1;
        }
        
        return res+ solve(root->left, maxi,0) + solve(root->right,maxi,0);
        
    }
    
    int goodNodes(TreeNode* root) {
        
        int maxi=root->val;
        int res=0;
        return solve(root,maxi,res );
        
    }
};