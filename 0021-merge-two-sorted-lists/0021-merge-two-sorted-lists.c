/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
     if (!list1) return list2;
    if (!list2) return list1;

    // Initialize current and next pointers of both lists
    struct ListNode *curr1 = list1;
    struct ListNode *curr2 = list2;
    struct ListNode *head = NULL, *tail = NULL;

    // Determine the head of the merged list
    if (curr1->val <= curr2->val) {
        head = tail = curr1;
        curr1 = curr1->next;
    } else {
        head = tail = curr2;
        curr2 = curr2->next;
    }

    // Merge the lists
    while (curr1 && curr2) {
        if (curr1->val <= curr2->val) {
            tail->next = curr1;
            curr1 = curr1->next;
        } else {
            tail->next = curr2;
            curr2 = curr2->next;
             }
        tail = tail->next;
    }

    // Attach any remaining nodes
    if (curr1) {
        tail->next = curr1;
    } else {
        tail->next = curr2;
    }

    return head;


}