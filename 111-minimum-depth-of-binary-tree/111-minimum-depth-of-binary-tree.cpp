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
    void height(TreeNode *root, int len, int &minlen)
    {
        if(!root)
        {
            return;
        }
        
        if(!root->left && !root->right)
        {
           if(minlen>=len)
           {
               minlen=len;
           }
        }
        height(root->left, len+1, minlen);
        height(root->right, len+1, minlen);
    }
    
    
    int minDepth(TreeNode* root) {
        
        if(!root)
        {
            return 0;
        }
        int minlen=INT_MAX;
        height(root,1, minlen);
        
        return minlen;
    }
};