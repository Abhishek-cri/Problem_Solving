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
    bool hasCycle(ListNode *head) {
        
        if(!head)
        {
            return false;
        }
        ListNode *slow=head;    
        ListNode* fast=head;
    
        if(head->next==NULL || head->next->next==NULL)
        {
            return false;
        }
        
        while(fast!=NULL || slow!=NULL)
        {
    
         
               slow=slow->next;
            if(fast==NULL || slow==NULL || fast->next==NULL)
            {
                return false;
            }
            fast=fast->next->next;
         
    
             if(fast==slow)
            {
                return true;
            }
              
        }
        
        return false;
    }
};