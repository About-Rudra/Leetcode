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
    ListNode* partition(ListNode* head, int x) {

       ListNode* smallerHead = new ListNode(0);
        ListNode* greaterHead = new ListNode(0);
        
        ListNode* smaller = smallerHead;
        ListNode* greater = greaterHead;

       ListNode* curr = head;
        while(curr != NULL) {
            if(curr->val < x) {
                smaller->next = curr;  
                smaller = smaller->next;
            } else {
                greater->next = curr;  
                greater = greater->next;
            }
            curr = curr->next;  
        }

        smaller->next = greaterHead->next;
         greater->next = NULL;

        return smallerHead->next;

        
    }
};