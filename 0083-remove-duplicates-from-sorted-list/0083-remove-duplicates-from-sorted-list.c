/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {

    if(head == NULL){
        return NULL;
    }

    struct ListNode* fast = head->next;
    struct ListNode* slow = head;
    struct ListNode* temp = NULL;
    
    while(fast!=NULL){
        if(fast->val == slow->val){
            temp = fast;
            fast = fast->next;
            free(temp);
            slow->next = fast;

        }else{
            fast = fast->next;
            slow = slow->next;
        }
    }
    return head;
}