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
    ListNode *point(ListNode *head) {
         if(head==NULL)
        return NULL;
         ListNode *slow=head;
        ListNode *fast=head;
        
        while(slow!=NULL && fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;

            }
            slow=slow->next;
            if(slow==fast)
            {
             return slow;
            }
        }
        return NULL;
    }  

    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)
        return NULL;
        ListNode *pov=point(head);
        ListNode *slow=head;
        
        while(slow!=pov)
        {
           
           slow=slow->next;
            if(pov!=NULL){
           pov=pov->next;
            }
        }
        return slow;
    }      
       
};