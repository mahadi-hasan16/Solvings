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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *n=head;
        int i=0;
        while(n)
        {
            i++;
            n=n->next;
        }
        n=head;
        if(i==1)
        {
            delete head;
            return NULL;
        }
        if(i==2)
        {
            n=head->next;
            head->next=NULL;
            delete n;
            return head;
        }
        i/=2;
        int k=0;
        ListNode *temp;
        while(k<i)
        {
            temp=n;
            n=n->next;
            k++;
        }
        temp->next=n->next;
        delete n;
        return head;
    }
};
