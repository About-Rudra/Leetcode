/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* temp = head;
    struct ListNode* prev = NULL;

    while (temp != NULL) {
        if (temp->val == val) {
            if (temp == head) {
                head = head->next;
                free(temp);
                temp = head;
            } else {
                prev->next = temp->next;
                free(temp);
                temp = prev->next;
            }
        } else {
            prev = temp;
            temp = temp->next;
        }
    }

    return head;
}
