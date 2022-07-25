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
//     bool check(TreeNode *p, TreeNode *q, TreeNode* sub){
        
//         if(q==sub){
//             return (p->val==q->val)&&(check(p->left,q->left ,sub )&&check(p-right,q->right ,sub))
//         }
//         else{
//             if(p!=NULL && q!=NULL)
//                 return true;
//             return (p->val==q->val)&&(check(p->left,q->left ,sub )&&check(p-right,q->right ,sub))
//         }
//     }
    bool isSame(TreeNode *p, TreeNode *q)
    {
      
       
        if(!p && !q)
        {
            return true;
        }
        
      if(!p || !q || p->val!=q->val)
      {
          return false;
      }
        
        return  isSame(p->left,q->left) && isSame(p->right,q->right);
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        if(!subRoot)
        {
            return true;
        }
        
        if(!root && subRoot)
        {
            return false;
        }
        
       if(isSame(root,subRoot))
        {
            return true;
        }
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
        
     
       
         
    }
};