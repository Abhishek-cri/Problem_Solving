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
    ListNode* reverseList(ListNode* head) {
        
        if(!head)
        {
            return NULL;
        }
        if(head->next==NULL)
        {
            return head;
        }
        ListNode *temp,*p;
        p=head;
        temp=head->next;
        p->next=NULL;
        head=temp;
        temp=head->next;
        head->next=p;
        p=head;
        while(temp!=NULL)
        {
            head=temp;
            temp=head->next;
            head->next=p;
            p=head;
        }
        
        return head;
    }
};