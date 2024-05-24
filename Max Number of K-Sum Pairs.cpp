class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int l=nums.size();
        int i=0,j=l-1;
        int sum,ans=0;
        sort(nums.begin(),nums.end());
        while(i<j)
        {
            sum=nums[i]+nums[j];
            if(sum==k)
            {
                ans++;
                i++;
                j--;
            }
            if(sum<k)
            {
                i++;
            }
            if(sum>k)
            {
                j--;
            }
        }
        return ans;
    }
};
