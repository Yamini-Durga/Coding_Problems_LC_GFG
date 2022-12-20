https://leetcode.com/problems/merge-two-sorted-lists/description/

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head, *prev;
        if(list1 == NULL)   return list2;
        if(list2 == NULL)   return list1;
        // head of the merged linked list
        if(list1->val <= list2->val){
            head = prev = list1;
            list1 = list1->next;
        }
        else{
            head = prev = list2;
            list2 = list2->next;
        }
        while(list1 != NULL && list2 != NULL){
            if(list1->val <= list2->val){
                prev->next = list1;
                list1 = list1->next;
            }
            else {
                prev->next = list2;
                list2 = list2->next;
            }
            prev = prev->next;
        }
        if(list1 != NULL)
            prev->next = list1;
        if(list2 != NULL)
            prev->next = list2;
        return head;
    }
