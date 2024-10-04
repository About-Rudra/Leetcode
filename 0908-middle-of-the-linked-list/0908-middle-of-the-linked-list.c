/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* temp = head;
    int count = 0;

    // Count the number of nodes in the list
    while (temp != NULL) {
        temp = temp->next;
        count++;
    }

    // Calculate the middle index
    int middle = count / 2;

    // Move to the middle node
    temp = head;
    for (int i = 0; i < middle; i++) {
        temp = temp->next;
    }

    return temp;
}
