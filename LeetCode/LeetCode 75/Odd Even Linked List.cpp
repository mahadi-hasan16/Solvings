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
    ListNode* oddEvenList(ListNode* head) {
        vector<int>v;
        ListNode *_head=head;
        while(_head)
        {
            v.push_back(_head->val);
            _head=_head->next;
        }
        int i;
        _head=head;
        i=0;
        while(_head && i<v.size())
        {
            _head->val=v[i];
            _head=_head->next;
            i+=2;
        }
        i=1;
        while(_head && i<v.size())
        {
            _head->val=v[i];
            _head=_head->next;
            i+=2;
        }
        return head;
    }
};
