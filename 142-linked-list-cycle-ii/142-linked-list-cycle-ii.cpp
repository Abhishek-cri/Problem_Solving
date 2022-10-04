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
        
        ListNode *slow;
        ListNode *fast;
        fast=slow=head;
        if(head==NULL || head->next==NULL)
        {
            return NULL;
        }
        
        bool flag=true;
        while(fast and fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            {
                flag=false;
                break;
            }
            
        }
        
        
        if(flag==true)
        {
            return NULL;
        }
      else  
      { 
        slow=head;
        
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
      } 
        
        return fast;
        
        
    }
};