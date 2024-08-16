class Solution {
public:
    int dp[1005];

    void setDpValue()
    {
        for(int i=0; i<1005; i++)
        {
            dp[i] = -1;
        }
    }

    int costFind(vector<int>& cost, int pos)
    {
        if(dp[pos]>=0)
            return dp[pos];

        if(pos == cost.size())
            return 0;

        if(pos > cost.size())
            return 1001;

        int cost1 = cost[pos] + costFind(cost, pos+1);
        int cost2 = cost[pos] + costFind(cost, pos+2);

        int minCost = min(cost1, cost2);

        dp[pos] = minCost;

        return dp[pos];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        setDpValue();
        
        int cost1 = costFind(cost, 0);
        int cost2 = costFind(cost, 1);

        int minCost = min(cost1, cost2);
        return minCost;
    }
};
