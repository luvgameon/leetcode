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
 // function for reversing a list
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = NULL;
        
        ListNode* curr = head;
        
        while(curr)
        {
            ListNode* next = curr -> next;
            
            curr -> next = prev;
            
            prev = curr;
            
            curr = next;
        }
        
        return prev;
    }
    
    // function for getting mid of the list, using slow anf fast pointer
 
    ListNode* get_mid(ListNode* head)
    {
        ListNode* slow = head;
        
        ListNode* fast = head -> next;
        
        // move slow by 1 step and fast by two step
        
        while(fast && fast -> next)
        {
            slow = slow -> next;
            
            fast = fast -> next -> next;
        }
        
        return slow;
     }
    
    bool isPalindrome(ListNode* head) {
        
        // firstly get the middle node
        
        ListNode* mid = get_mid(head);
        
        // list1 points to the head of the 1st list
        
        ListNode* list1 = head;
        
        // list2 points to the head of the second list
        
        ListNode* list2 = mid -> next;
        
        mid -> next = NULL;
        
        // reverse the list2
        
        list2 = reverse(list2);
        
        // check for palindrome
        
        while(list1 && list2)
        {
            // if values are not equal
            
            if(list1 -> val != list2 -> val)
            {
                return false;
            }
            
            // update pointers
            
            list1 = list1 -> next;
            
            list2 = list2 -> next;
        }
        
        return true;   
    }
};