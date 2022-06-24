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
    bool isleaf(TreeNode *root)
    {
        //int x=0,y=0;
        if(root)
        {
           isleaf(root->left);
           isleaf(root->right);
            
            if(!root->left && !root->right)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        return 0;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        
        queue<TreeNode *>q;
        int sum=0;
        if(!root)
        {
            return 0;
        }
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                root=q.front();
                q.pop();
                if(isleaf(root->left))
                {
                    sum+=root->left->val;
                }
                if(root->left)
                {
                    q.push(root->left);
                }
                
                if(root->right)
                {
                    q.push(root->right);
                }
                
            }
        }
        
        return sum;
    }
};