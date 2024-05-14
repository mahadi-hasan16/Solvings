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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *prev=NULL, *node=head;
        while(node)
        {
            if(node->val==val){
                if(prev){
                    prev->next=node->next;
                    delete node;
                    node=prev->next;
                }
                else{
                    head=node->next;
                    delete node;
                    node=head;
                }
            }
            else{
                prev=node;
                node=node->next;
            }
        }
        return head;
    }
};
