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
    ListNode* head = new ListNode();
    ListNode* temp = head;
    int sm=0, carry=0;
    
    while(l1 || l2 || carry){
        sm = 0;
        if(l1){
            sm += l1->val;
            l1 = l1->next;
        }
        if(l2){
            sm += l2->val;
            l2 = l2->next;
        }
        temp->next = new ListNode((sm+carry)%10);
        temp = temp->next;
        carry = (sm+carry)/10;
    }
    return head->next;
}
};