/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
//     TreeNode* lca(TreeNode* root, TreeNode* p, TreeNode* q, bool* pc , bool* lc){
//         if(root==p){
//             pc= true ;
//             return NULL
//         }
//         else(root==p){
            
//         }
//     }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(p==root|| q==root||!root)
        {
            return  root;
        }
        
        TreeNode *left=lowestCommonAncestor(root->left,p,q);
        TreeNode *right=lowestCommonAncestor(root->right,p,q);
        
        if(!left)
        {
            return right;
        }
        
       else if(!right)
        {
            return left;
        }
        else
        {
            return root;
        }
          
    }
};