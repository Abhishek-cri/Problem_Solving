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
    
    unordered_map<int,pair<int, int>>m;
    bool isCousins(TreeNode* root, int x, int y) 
    {
        if(!root)
        {
            return false;
        }
        preorder(root, root, 0);
        return m[x].first!=m[y].first && m[x].second==m[y].second;
    }
    
    void preorder(TreeNode *root, TreeNode *parent, int depth)
    {
        if(!root)
        {
            return;
        }
        m[root->val]={parent->val, depth};
        preorder(root->left, root,depth+1 );
        preorder(root->right, root, depth+1);
    }
    
    
};