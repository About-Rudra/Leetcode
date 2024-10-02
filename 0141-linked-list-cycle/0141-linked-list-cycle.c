/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
if(head==NULL)
    return false;

  if(head-> next == NULL)
        return false;
   struct  ListNode* q = head;
   struct  ListNode* p = head;
     while(q != NULL && p != NULL){
         p = p->next;
         if(p != NULL)
             p = p->next;
             q = q-> next;
         if(q == p)
             return true;
     }
    return false;
  

}