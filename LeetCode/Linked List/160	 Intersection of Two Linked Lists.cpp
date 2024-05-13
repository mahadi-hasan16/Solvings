/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*>ptr;
        while(headA)
        {
            ptr.insert(headA);
            headA=headA->next;
        }
        int i=0;
        int m=ptr.size();
        while(headB)
        {
            ptr.insert(headB);
            i++;
            if((m+i)>ptr.size())
            {
                return headB;
            }
            headB=headB->next;
        }
        return NULL;
    }
};
