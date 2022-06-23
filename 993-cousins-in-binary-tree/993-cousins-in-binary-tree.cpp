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
    bool isCousins(TreeNode* root, int x, int y) {
        
        queue<TreeNode *>q;
        
        if(!root)
        {
            return false;
        }
        
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            bool isA=false;
            bool isB=false;
            
            for(int i=0;i<n;i++)
            {
             
                root=q.front();
                q.pop();
                if(root->val==x)
                {      
                   isA=true;
                }
                if(root->val==y)
                {    
                  isB=true;
                }    
                if(root->left && root->right)
                {
                    if(root->left->val==x && root->right->val==y)
                    {
                        return false;
                    }
                    if(root->left->val==y && root->right->val==x)
                    {
                        return false;;
                    }
                    
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
            if(isA && isB)
            {
                return true;
            }
        }
        return false;
        
    }
};