/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode* tempA = headA;
    struct ListNode* tempB = headB;
    
      if (headA == NULL || headB == NULL) {
        return NULL; // If either list is empty, return NULL
    }

    

    // Traverse both lists
    while (tempA != tempB) {
        // Move to the next node or switch to the other list
        if (tempA != NULL) {
            tempA = tempA->next;
        } else {
            tempA = headB; // Switch to headB if reached the end of list A
        }

        if (tempB != NULL) {
            tempB = tempB->next;
        } else {
            tempB = headA; // Switch to headA if reached the end of list B
        }
    }

    return tempA; // This will be the intersection node or NULL
}
