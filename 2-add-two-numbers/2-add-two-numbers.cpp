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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    
        ListNode  *list3=new ListNode;
        ListNode *temp=list3;
        //int sum=0;
       int c=0;
        
       while(c || l1 || l2)
       {
           int sum=0;
           if(l1!=0)
           {
               sum+=l1->val;
               l1=l1->next;
           }
           if(l2!=0)
           {
               sum+=l2->val;
               l2=l2->next;
           }
           sum+=c;  // add carry to sum
           c=sum/10;
           ListNode *newnode=new ListNode(sum%10);
           temp->next=newnode;
           temp=temp->next;
       }
       return list3->next;
    }
    
};