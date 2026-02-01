class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* leftpre = dummy;
        ListNode* currNode = head;

        for (int i = 0; i < left - 1; i++) {
            leftpre = leftpre->next;
            currNode = currNode->next;
        }

        ListNode* SubListHead = currNode;
        ListNode* preNode = nullptr;

        for (int i = 0; i <= right - left; i++) {
            ListNode* nextNode = currNode->next;
            currNode->next = preNode;
            preNode = currNode;
            currNode = nextNode;
        }

        // reconnect outside loop
        leftpre->next = preNode;
        SubListHead->next = currNode;

        return dummy->next;
    }
};
