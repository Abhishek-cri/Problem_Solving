{
return false;
}
if(root->left->val==y && root->right->val==x)
{
return false;;
}
}
if(root->left)
{
q.push(root->left);
}
if(root->right)
{
q.push(root->right);
}
}
if(isA && isB)
{
return true;
}
}
return false;
}
};