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
    int widthOfBinaryTree(TreeNode* root) {
        
        if(!root) return 0;
        
        queue<pair<TreeNode *,int>>q;
        // int index=0;
       
        q.push({root, 0});
        
        long long ans=0;
        while(!q.empty())
        {
            int n=q.size();
            int mini=q.front().second;
            int first, last;
            for(int i=0;i<n;i++)
            {
            
                long long curr_ind=q.front().second-mini;
                root=q.front().first;
                q.pop();
                if(i==0) first=curr_ind;
                if(i==n-1) last=curr_ind;
                
                if(root->left)
                {
                    q.push({root->left, 2LL*curr_ind+1LL});
                }
                if(root->right)
                {
                    q.push({root->right, 2LL*curr_ind+2LL});
                }
            }
            ans=max(ans,last-first+1LL);
        }
        
        return ans;
    }
};