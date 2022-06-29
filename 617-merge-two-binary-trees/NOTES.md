{
return NULL;
}
root2->val+=root1->val;
mergeTrees(root1->right, root2->right);
mergeTrees(root1->left, root2->left);
return root2;
}
TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
int n1=count(root1);
int n2=count(root2);
if(n1>=n2)
{
return  merge1(root1, root2);
}
else
{
return merge2(root1,root2);
}
}
};