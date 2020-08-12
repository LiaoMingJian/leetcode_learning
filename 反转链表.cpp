class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) {
            return head;
        }
        ListNode *cur = head;
        while (head -> next != NULL) {
            ListNode *t = head -> next ->next;
            head -> next -> next = cur;
            cur = head -> next;
            head -> next = t;
        }
        return cur;
    }
};

