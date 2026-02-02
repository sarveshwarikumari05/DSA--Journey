class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Dummy node
        ListNode dummy(0);
        ListNode* temp = &dummy;

        // Merge while both lists are not empty
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                temp->next = list1;
                list1 = list1->next;
            } else {
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }

        // Attach remaining nodes
        if (list1 != nullptr) {
            temp->next = list1;
        } else {
            temp->next = list2;
        }

        return dummy.next;
    }
};
//This function merges two sorted linked lists into one sorted linked list.
//Time Complexity: O(n + m), Space Complexity: O(1)