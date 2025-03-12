/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr = new ListNode();
        ListNode* head = ptr;
        int rem = 0, result = 0;
        while(l1 and l2)
        {
            result = (l1 -> val + l2 -> val + rem)%10;
            rem = (l1 -> val + l2 -> val + rem)/10;
            ptr -> next = new ListNode(result);
            ptr = ptr -> next;
            l1 = l1 -> next;
            l2 = l2 -> next;
        }

        while(l1)
        {
            result = (l1 -> val + rem)%10;
            rem = (l1 -> val + rem)/10;
            ptr -> next = new ListNode(result);
            ptr = ptr -> next;
            l1 = l1 -> next;
        }

        while(l2)
        {
            result = (l2 -> val + rem)%10;
            rem = (l2 -> val + rem)/10;
            ptr -> next = new ListNode(result);
            ptr = ptr -> next;
            l2 = l2 -> next;
        }

        if(rem)
        {
            ptr -> next = new ListNode(rem);
            ptr = ptr -> next;
        }

        return head -> next;
    }
};
