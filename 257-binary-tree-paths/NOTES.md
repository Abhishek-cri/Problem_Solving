Logic-> use depth first search
​
algorithm->
​
take a string vector (let st)and a empty string (current).
make base statement if(!root) return st;
​
now call dfs(root, string, vector<string>st)
so this function will going to be our recursive function in which we are gonna write dfs recursive code.
​
so inside this function first at currrent+=to_string(root->val)
and if both root->left and root->right are NULL then push it into vector and return
​
if root->left !NULL then call dfs(root->left, current+" ". vector<string>)
DO  similarly for root->right