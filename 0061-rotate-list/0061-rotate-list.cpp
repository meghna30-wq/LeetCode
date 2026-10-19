class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        int len = 1;
        ListNode* tail = head;
        while (tail->next != nullptr) {
            tail = tail->next;
            len++;
        }

        k = k % len;
        if (k == 0) return head;

        tail->next = head;

        ListNode* curr = head;
        for (int i = 0; i < len - k - 1; i++) {
            curr = curr->next;
        }

        ListNode* newHead = curr->next;
        curr->next = nullptr;

        return newHead;
    }
};