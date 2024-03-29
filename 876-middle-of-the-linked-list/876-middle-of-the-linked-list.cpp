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
    ListNode* middleNode(ListNode* head) {
        
        int count=0;
        int mid=0;
        ListNode *p=head;
        
        while(p!=NULL)
        {
            count+=1;
            p=p->next;
        }
        
       
            mid=count/2;
        
        
        
        int a=0;
        
        p=head;
        
        while(a!=mid)
        {
            a++;
            p=p->next;
        }
        
       
        return p;
        
        
    }
};