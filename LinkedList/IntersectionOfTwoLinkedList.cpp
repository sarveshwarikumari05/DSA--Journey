class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      

        ListNode* a = headA;
        ListNode* b = headB;

        while (a != b) {
            if (a == NULL)
                a = headB;
            else
                a = a->next;

            if (b == NULL)
                b = headA;
            else
                b = b->next;
        }

        return a;   // intersection node OR NULL
  

    }
};
//This function finds the intersection node of two singly linked lists.
//Time Complexity: O(n + m), Space Complexity: O(1)