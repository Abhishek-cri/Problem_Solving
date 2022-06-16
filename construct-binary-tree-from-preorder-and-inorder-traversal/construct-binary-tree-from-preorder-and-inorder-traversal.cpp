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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        if(preorder.size()==0 || inorder.size()==0)
        {
            return NULL;
        }
        
        map<int,int>hm;
        for(int i=0;i<inorder.size();i++)
        {
            hm[inorder[i]]=i;
        }
        
        return create(inorder, 0, inorder.size()-1, preorder, 0, preorder.size()-1,hm);
        
    }
    
TreeNode * create(vector<int>& inorder, int is, int ie,vector<int> &preorder, int ps, int pe, map<int, int>&hm)
{
    if(is>ie || ps>pe)
    {
        return NULL;
    }
    
    TreeNode * root=new TreeNode(preorder[ps]);
    
    int inRoot=hm[preorder[ps]];
    int numleft=inRoot-is;
    
    root->left=create(inorder, is, inRoot-1, preorder, ps+1, ps+numleft, hm);
    root->right=create(inorder, inRoot+1, ie, preorder, ps+numleft+1,pe,hm);
    
    return root;
}
        
};