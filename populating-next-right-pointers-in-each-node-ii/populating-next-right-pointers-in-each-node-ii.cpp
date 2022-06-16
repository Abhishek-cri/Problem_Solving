/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
        queue<Node *>q;
        Node *x;
        x=root;
        if(!root)
        {
            return NULL;
        }
    
        q.push(root);
        root->next=NULL;
        
        while(!q.empty())
        {
            vector<Node *>vec;
            int n=q.size();
            
            for(int i=0;i<n;i++)
            {
               x=q.front();
                q.pop();
                vec.push_back(x);
                
                if(x->left)
                {
                    q.push(x->left);
                }
                
                if(x->right)
                {
                    q.push(x->right);
                }
            }
            
            int i=0;
            for(i=0;i<vec.size()-1;i++)
            {
                vec[i]->next=vec[i+1];
            }
            vec[i]->next=NULL;
        }
        
        return root;
    }
};