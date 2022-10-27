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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
         ListNode* curr=head;
        int len=0;
        if(!head || !head->next)
        {
            return head;

        }
        while(temp)
        {
            len++;
            temp=temp->next;

        }
        k=k%len;
        while(k--)
        {
            temp=head;
            curr=head;
            while(curr->next)
            {
                temp=curr;
                curr=curr->next;
                
            }
            temp->next=NULL;
            curr->next=head;
            head=curr;

        }
        return head;
        
        
    }
};