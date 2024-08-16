class Solution {
public:
    int rob(vector<int>& nums) {
        int i;
        int l = nums.size();

        if(l == 1)
            return nums[0];

        if(l == 2)
            return max(nums[0], nums[1]);

        int dp[105] = {0};

        dp[0] = nums[0];
        dp[1] = max(nums[1], nums[0]); 

        for(i =2; i<l; i++)
        {
            dp[i] = max(dp[i-1], nums[i] + dp[i-2]);
        }

        return max(dp[l-1], dp[l-2]);
    }
};
