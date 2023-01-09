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
    
    
    void solve(TreeNode *root, vector<int>&vec)
    {
        if(!root)
        {
            return ;
        }

        
                vec.push_back(root->val);
        solve(root->left, vec);

        solve(root->right, vec);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int>vec;
        
        // solve(root, vec);
        if(!root)
        {
            return vec;
        }
        stack<TreeNode *>st;
        // st.push(root);
        
        while(root || !st.empty())
        {
            
            if(root)
            {
                vec.push_back(root->val);
                st.push(root);
                root=root->left;
            }
            else
            {
                root=st.top();
                st.pop();
                root=root->right;
            }
            
        }
        
        
        return vec;
    }
};