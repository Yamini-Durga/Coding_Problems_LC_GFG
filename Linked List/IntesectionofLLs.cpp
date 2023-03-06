https://leetcode.com/problems/intersection-of-two-linked-lists/description/
// T(n) = O(m+n) S(n) = O(m)
// C++ code 
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*, int> nodeMap;
        while(headA != NULL)
        {
            nodeMap[headA] = headA->val;
            headA = headA->next;
        }
        while(headB != NULL)
        {
            if(nodeMap.find(headB) != nodeMap.end())
            {
                return headB;
            }
            headB = headB->next;
        }
        return NULL;
    }
// C# code
public ListNode GetIntersectionNode(ListNode headA, ListNode headB) {
        List<ListNode> nodeMap = new List<ListNode>();
        while(headA != null)
        {
            nodeMap.Add(headA);
            headA = headA.next;
        }
        while(headB != null)
        {
            if(nodeMap.Find(n => n == headB) != null)
            {
                return headB;
            }
            headB = headB.next;
        }
        return null;
    }

// T(n) = O(m+n) S(n) = O(1)
// C++ code 
// using difference of length
int lengthDiff(ListNode *headA, ListNode *headB)
    {
        ListNode *tempA = headA, *tempB = headB;
        int lenA = 0, lenB = 0;
        while(tempA != NULL || tempB != NULL)
        {
            if(tempA != NULL){
                lenA++;
                tempA = tempA->next;
            }
            if(tempB != NULL){
                lenB++;
                tempB = tempB->next;
            }
        }
        return lenA-lenB;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // Diff = +ve --> List A is larger ow List B
        int diff = lengthDiff(headA, headB);
        if(diff > 0){
            while(diff-- != 0)
                headA = headA->next;
        }
        else {
            while(diff++ != 0)
                headB = headB->next;
        }
        while(headA != headB)
        {
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
