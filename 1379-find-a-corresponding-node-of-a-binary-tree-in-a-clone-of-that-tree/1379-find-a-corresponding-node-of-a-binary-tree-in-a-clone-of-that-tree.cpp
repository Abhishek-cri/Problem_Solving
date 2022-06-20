/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    TreeNode *ans, *target;
    void solve(TreeNode *cloned, TreeNode *ori)
    {
        if(ori)
        {     
        solve(cloned->left, ori->left);
        if(ori==target)
        {
            ans=cloned;
        }
        solve(cloned->right, ori->right);
        }    
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        this->target=target;
       
    solve(cloned,original);
      return ans; 
    }
};