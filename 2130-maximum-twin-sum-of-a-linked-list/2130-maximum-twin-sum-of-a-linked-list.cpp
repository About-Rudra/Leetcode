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
    int pairSum(ListNode* head) {
        // Step 1: Find the middle of the list using slow/fast pointers
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // Now slow points to the start of the second half
        
        // Step 2: Reverse the second half
        ListNode* prev = nullptr;
        ListNode* curr = slow;
        
        while (curr != nullptr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        
        // Now prev is the head of the reversed second half (originally the tail)
        
        // Step 3: Traverse both halves and find maximum twin sum
        ListNode* left = head;      // start of first half
        ListNode* right = prev;     // start of reversed second half
        
        int maxSum = 0;
        while (right != nullptr) {
            maxSum = max(maxSum, left->val + right->val);
            left = left->next;
            right = right->next;
        }
        
        return maxSum;
    }
};