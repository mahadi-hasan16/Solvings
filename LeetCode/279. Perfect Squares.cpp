class Solution {
public:
    int numSquares(int n) {
        vector<int>dp(n+1);
        dp[0]=0;
        dp[1]=1;
        int i,j,sq,mn;
        for(i=2;i<=n;i++)
        {
            mn=INT_MAX;
            for(j=1;j*j<=i;j++)
            {
                sq=j*j;
                mn=min(mn,dp[i-sq]);
            }
            dp[i]=mn+1;
        }
        return dp[n];
    }
};
