public class Solution {
    public int MaxOperations(int[] nums, int k) {
        Array.Sort(nums);
        int l=nums.Length;
        int i=0,j=l-1;
        int sum,ans=0;
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
}
