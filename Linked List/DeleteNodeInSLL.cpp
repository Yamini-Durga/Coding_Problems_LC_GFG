https://leetcode.com/problems/delete-node-in-a-linked-list/description/
// C++ code
void deleteNode(ListNode* node) {
        ListNode *nextNode = node->next;
        node->val = nextNode->val;
        node->next = nextNode->next;
        delete nextNode;
    }

// C# code
public void DeleteNode(ListNode node) {
        node.val = node.next.val;
        node.next = node.next.next;
    }
