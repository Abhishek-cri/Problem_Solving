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
        
        queue<TreeNode *>q;
        
        q.push(root);
        vector<vector<int>>ans;
        
        if(root==NULL)
        {
            return ans;
        }
         int level=0;
        while(!q.empty())
        {
            vector<int>temp;
            int n=q.size();
           
            
            for(int i=0;i<n;i++)
            {
                root=q.front();
                q.pop();
                temp.push_back(root->val);
              
                
                if(root->right)
                {
                    q.push(root->right);
                }
                if(root->left)
                {
                    q.push(root->left);
                }
                
            }
           level+=1;
            if(level%2!=0)
                {
                    reverse(temp.begin(), temp.end());
                }
             
            
            
           ans.push_back(temp); 
            
            
            
        }
        
        return ans;
        
    }
};