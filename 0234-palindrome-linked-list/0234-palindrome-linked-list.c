/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverse(struct ListNode* head){
    struct ListNode* temp = head;
    struct ListNode* r = NULL, *q = NULL;
    while(temp!=NULL){
        r = q;
        q = temp;
        temp = temp->next;
        q->next = r;

    }
    return q;
}
bool isPalindrome(struct ListNode* head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;

    if(head== NULL || head->next==NULL){
        return true;
    }


//middle of element
while(fast!=NULL && fast->next!=NULL){
    slow = slow->next;
    fast = fast->next->next;
}

struct ListNode* secondhalf = reverse(slow);
struct ListNode* firsthalf = head;

while(secondhalf!=NULL){
    if(firsthalf->val!=secondhalf->val){
        return false;
    }else{
        firsthalf = firsthalf->next;
        secondhalf = secondhalf->next;
    }
}
return true;
    
}