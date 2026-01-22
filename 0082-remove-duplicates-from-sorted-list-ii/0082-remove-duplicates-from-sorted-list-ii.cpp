class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        
        while(head) {
            // If we find duplicates
            if(head->next && head->val == head->next->val) {
                // Skip all nodes with same value
                while(head->next && head->val == head->next->val) {
                    head = head->next;
                }
                // Connect prev to node after duplicates
                prev->next = head->next;
            } else {
                // No duplicates, move prev forward
                prev = prev->next;
            }
            
            head = head->next;
        }
        
        ListNode* result = dummy->next;
        delete dummy;
        return result;
    }
};