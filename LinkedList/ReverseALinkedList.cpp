class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next; // store next
            curr->next = prev;              // reverse link
            prev = curr;                    // move prev
            curr = nextNode;                // move curr
        }
        return prev;
    }
};


//This is an iterative approach to reverse a singly linked list.
//Time Complexity: O(n), Space Complexity: O(1)
