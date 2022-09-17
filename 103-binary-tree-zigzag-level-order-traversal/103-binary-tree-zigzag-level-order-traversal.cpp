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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        
        if(!root) return ans;
        queue<TreeNode *>q;
        q.push(root);
        int level=0;
        while(!q.empty())
        {
            int n=q.size();
            vector<int>vec;
            level+=1; 
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
            if(level%2==0)
            {
                reverse(vec.begin(), vec.end());
            }
            ans.push_back(vec);
        }
        
        return ans;
        
    }
};