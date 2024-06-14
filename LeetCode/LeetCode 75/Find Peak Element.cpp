class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i,n=nums.size()-1;
        int l=0,mid,h=n;
        while(l<h)
        {
            mid=(l+h)/2;
            if(nums[mid]>=nums[mid+1]) 
            {
                h=mid;
            }
            else 
            {
               l=mid+1;
            }
        }
        return l;
    }
};
