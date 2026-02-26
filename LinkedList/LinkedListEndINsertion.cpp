class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        
        // Create new node
        Node* newNode = new Node(x);
        
        // If list is empty
        if (head == NULL) {
            return newNode;
        }
        
        // Traverse to last node
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        
        // Insert at end
        temp->next = newNode;
        
        return head;
    }
};

// Time Complexity: O(n) where n is the number of nodes in the linked list.
// Space Complexity: O(1) as we are using only constant extra space.
// This code defines a function to insert a new node with value x at the end of a linked list. It first checks if the list is empty and if so, it returns the new node as the head. Otherwise, it traverses to the end of the list and appends the new node there.