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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
       
        TreeNode * root=NULL;
        int n=inorder.size();
        int m=postorder.size();
        
        map<int, int>hm;
        
        for(int i=0;i<n;i++)
        {
            hm[inorder[i]]=i;
        }
        
        return finalTree(inorder,0, n-1, postorder,0,m-1,hm);
    }
    
    
TreeNode * finalTree(vector<int>&inorder, int is, int ie, vector<int> &postorder,int ps,int pe,map<int,int> &hm)
    {
        if(is>ie || ps>pe)
        {
            return NULL;
        }
        
        TreeNode * root=new TreeNode(postorder[pe]);
         // root=hm[postorder[pe]];
        
       int inRoot=hm[postorder[pe]];
       int numleft=inRoot-is;
        
        root->left=finalTree(inorder, is, inRoot-1,postorder, ps, ps+numleft-1, hm);
        root->right=finalTree(inorder, inRoot+1, ie, postorder,ps+numleft,pe-1,hm);
        
        return root;
    }
};