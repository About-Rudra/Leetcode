/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* temp = head;
    struct ListNode* r , *q = NULL;
    while(temp){
        r = q;
        q = temp;
        temp = temp->next;
        q->next = r;
    } 
    head = q;

    return head;
}