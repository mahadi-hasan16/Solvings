public class Solution {

    public int MinCostClimbingStairs(int[] cost) {

        int l;
        l = cost.Length;

        if(l==2)
            return Math.Min(cost[0], cost[1]);


        int i;
        for(i=2; i<l; i++)
        {
            cost[i] = cost[i] + Math.Min(cost[i-1], cost[i-2]);
        }

        return Math.Min(cost[l-1], cost[l-2]);
        
    }
}
