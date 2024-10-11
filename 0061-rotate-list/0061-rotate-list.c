/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {

  if (!head || k == 0) return head;

    // Step 1: Calculate length of the list
    struct ListNode* temp = head;
    int length = 1;
    while (temp->next) {
        temp = temp->next;
        length++;
    }

    // Step 2: Make the list circular
    temp->next = head;

    // Step 3: Find the new head position
    k = k % length;  // In case k is greater than length
    int newHeadPos = length - k;

    // Step 4: Find the new head and break the circle
    temp = head;
    for (int i = 1; i < newHeadPos; i++) {
        temp = temp->next;
    }
    head = temp->next;
    temp->next = NULL;

    return head;


}