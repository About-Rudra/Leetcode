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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* fastgap = dummy;
        ListNode* slowgap = dummy;

        // create gap
        for (int i = 0; i < n; i++) {
            fastgap = fastgap->next;
        }

        while (fastgap->next != NULL) {
            fastgap = fastgap->next;
            slowgap = slowgap->next;
        }

        // ListNode* nodeToDelete = slowgap->next;
        slowgap->next = slowgap->next->next;
        // delete nodeToDelete;

        return dummy->next;
    }
};