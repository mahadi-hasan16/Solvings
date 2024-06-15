class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int cnt=0,i;
        int mid,l=1,r=0;
        for(i=0;i<piles.size();i++)
        {
            r=max(r,piles[i]);
        }
        while(l<r)
        {
            mid = (l+r)/2;
            cnt=0;
            for(i=0;i<piles.size();i++)
            {
                cnt += (piles[i] % mid == 0) ? piles[i] / mid : (piles[i] / mid) + 1;
            }
            if(cnt<=h)
            {
                r=mid;
            }
            else
            {
                l=mid+1;
            }
        }
        return r;
    }
};
