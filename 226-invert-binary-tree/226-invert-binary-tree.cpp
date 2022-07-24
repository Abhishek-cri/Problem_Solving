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
    TreeNode* invertTree(TreeNode* root) {
        
        if(!root)
        {
            return NULL;
        }
        
        // TreeNode * new_root=new TreeNode();
        
        swap(root->left,root->right);
        TreeNode *left=invertTree(root->left);
        TreeNode *right=invertTree(root->right);
        return root;
    }
};