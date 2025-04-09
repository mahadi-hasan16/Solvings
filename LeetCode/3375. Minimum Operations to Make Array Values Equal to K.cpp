class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int i, cnt[105] = {0};
        for(i = 0; i < nums.size(); i ++)
        {
            if(nums[i] < k)
            {
                return -1;
            }

            cnt[nums[i]] ++;
        }

        int ans = 0;

        for(i = 1; i < 105; i ++)
        {
            if(cnt[i] > 0 and i > k)
            {
                ans++;
            }
        }

        return ans;
    }
};
