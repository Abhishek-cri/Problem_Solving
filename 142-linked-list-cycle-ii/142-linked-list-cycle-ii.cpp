/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *p,*q;
        p=q=head;
        bool met=false;
        while(p and p->next)
        {
            p=p->next->next;
            q=q->next;
            if(p==q)
            {
                met=true;
                break;
            }
        }
        if(met==false)
        {
            return NULL;
        }
        else
        {
            q=head;
            while(q!=p)
            {
                p=p->next;
                q=q->next;
            }
            
        }
        return p;
        
    }
};