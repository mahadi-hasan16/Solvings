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
    int pairSum(ListNode* head) {
        vector<int>v;
        long long mx=0,sum=0;
        while(head)
        {
            v.push_back(head->val);
            head=head->next;
        }
        int n=v.size()-1;
        int i, l=n/2;
        for(i=0;i<=l;i++)
        {
            mx=std::max(mx,(long long)(v[i]+v[n-i]));
        }
        return (int)mx;
    }
};
