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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        queue<TreeNode *>q;
        vector<vector<int>>ans;
        q.push(root);
        
        if(!root)
        {
            return ans;
        }
        
        while(!q.empty())
        {
            int n=q.size();
            vector<int>vec;
            
            for(int i=0;i<n;i++)
            {
                root=q.front();
                q.pop();
                vec.push_back(root->val);
                if(root->left)
                {
                    q.push(root->left);
                }
                if(root->right)
                {
                    q.push(root->right);
                }
            }
            ans.push_back(vec);
           
        }
         reverse(ans.begin(), ans.end());
        return ans;    
    }
};