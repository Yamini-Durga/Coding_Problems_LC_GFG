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
