https://leetcode.com/problems/add-two-numbers/description/
// C++ code
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3 = new ListNode();
        ListNode *th = l3;
        int c=0,x=0;
        while(l1 || l2){
            x=0;
            if(l1){
                x += l1->val;
                l1 = l1->next;
            }
            if(l2){
                x += l2->val;
                l2 = l2->next;
            }
            x = x+c;
            th->next = new ListNode(x%10);;
            th = th->next;
            c = x/10;
        }
        if(c == 1){
            th->next = new ListNode(c);
        }
        return l3->next;
    }
// C# code
public ListNode AddTwoNumbers(ListNode l1, ListNode l2) {
        ListNode l3 = new ListNode();
        ListNode tempPtr = l3;
        int carry = 0, sum = 0;
        while(l1 != null || l2 != null){
            sum = 0;
            if(l1 != null )
            {
                sum += l1.val;
                l1 = l1.next;
            }
            if(l2 != null )
            {
                sum += l2.val;
                l2 = l2.next;
            }
            sum += carry;
            tempPtr.next = new ListNode(sum%10);
            tempPtr = tempPtr.next;
            carry = sum/10;
        }
        if(carry == 1)
        {
            tempPtr.next = new ListNode(carry);
        }
        return l3.next;
    }
