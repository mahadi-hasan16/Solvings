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
    bool hasCycle(ListNode *head) {
        set<ListNode*>ptr;
        int i=0;
        while(head)
        {
            ptr.insert(head->next);
            head=head->next;
            i++;
            if(i>ptr.size())
            return true;
        }
        return false;
    }
};
