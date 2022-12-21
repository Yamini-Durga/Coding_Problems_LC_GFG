https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return head;
        ListNode *slow=head, *fast = head;
        while(n-- && fast){
            fast = fast->next;
        }
        if(!fast)
            return head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return head;
    }
