class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL) return NULL;
        
        
        unordered_map<Node*, Node*> oldToNew;
        
        
        Node* temp = head;
        while(temp != NULL) {
            Node* newNode = new Node(temp->val);
            oldToNew[temp] = newNode;
            temp = temp->next;
        }
        
        
        temp = head;
        while(temp != NULL) {
            Node* newTemp = oldToNew[temp];
            newTemp->next = oldToNew[temp->next];     // Connect next
            newTemp->random = oldToNew[temp->random]; // Connect random
            temp = temp->next;
        }
        
        
        return oldToNew[head];
    }
};