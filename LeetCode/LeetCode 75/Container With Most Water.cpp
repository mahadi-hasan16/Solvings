class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1,mn_height,width,area,ans=0;
        while(i<j)
        {
            if(height[i]<height[j])
            {
                mn_height=height[i];
                width=abs(j-i);
                area=mn_height*width;
                ans=max(ans,area);
                i++;
            }
            if(height[i]>height[j])
            {
                mn_height=height[j];
                width=abs(j-i);
                area=mn_height*width;
                ans=max(ans,area);
                j--;
            }
            if(height[i]==height[j])
            {
                mn_height=height[j];
                width=abs(j-i);
                area=mn_height*width;
                ans=max(ans,area);
                j--;
            }
        }
        return ans;
    }
};
