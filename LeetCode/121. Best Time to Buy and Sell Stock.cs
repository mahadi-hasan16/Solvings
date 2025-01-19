public class Solution {
    public int MaxProfit(int[] prices) {
        int mn = Int32.MaxValue;
        int i, ans = 0;
        for(i=0;i<prices.Length;i++)
        {
            mn = Math.Min(mn,prices[i]);
            if(prices[i]>mn)
            {
                ans = Math.Max(ans,(prices[i]-mn));
            }
        }
        return ans;
    }
}
