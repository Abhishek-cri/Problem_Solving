// this is brute force solution
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode() : val(0), left(nullptr), right(nullptr) {}
*     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
*     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
* };
*/
class Solution {
public:
int left_solve(TreeNode *root)
{
int left, right;
if(root)
{
left=left_solve(root->left);
right=left_solve(root->right);
return 1+max(left,right);
}
return 0;
}
int right_solve(TreeNode *root)
{
int left, right;
if(root)
{
left=right_solve(root->left);
right=right_solve(root->right);
return 1+max(left,right);
}
return 0;
}