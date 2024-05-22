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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp=NULL;
        ListNode *temp2=head;
        while(head)
        {
            temp2=head;
            head=temp2->next;
            temp2->next=temp;
            temp=temp2;
        }
        return temp;
    }
};
