/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public int PairSum(ListNode head) {
        List<int>l=new List<int>();
        long mx=0;
        while(head!=null)
        {
            l.Add(head.val);
            head=head.next;
        } 
        int n=l.Count-1;
        int i;
        for(i=0;i<=n/2;i++)
        {
            mx=Math.Max(mx,(long)(l[i]+l[n-i]));
        }
        return (int)mx;
    }
}
