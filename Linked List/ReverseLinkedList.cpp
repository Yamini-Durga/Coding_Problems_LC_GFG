https://leetcode.com/problems/reverse-linked-list/description/

ListNode* reverseList(ListNode* head) {
        // iterative approach
        ListNode *prev = NULL, *cur = head, *nextNode = NULL;
        while(cur != NULL){
            nextNode = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nextNode;
        }
        return prev;
    }
