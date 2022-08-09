/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
       
        
        if(head==NULL || head->next==NULL )
        {
            return head;
        }
         ListNode *p,*q;
        q=head;
        p=head->next;
        while(p!=NULL)
        {
            if(p->val==q->val)
            {
                q->next=p->next;
                p->next=NULL;
                p=q;
                p=q->next;
            }
            
        else{   
            p=p->next;
            q=q->next;
           }
        }
        return head;
    }
};