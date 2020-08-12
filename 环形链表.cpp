
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return nullptr;
        ListNode *fast = head, *slow = head;
        while(fast && fast->next)
        {
            fast = fast -> next -> next;//走两步
            slow = slow -> next;//走一步
            if(fast == slow) return true;
        }
        return false;
    }
};



