class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>ans;
        long long n=potions.size()-1;
        long long product=0,mid=0,l=0,r=n,i,cnt;
        for(i=0;i<spells.size();i++)
        {
            cnt=0;
            l=0,r=n;
            while(r>=l)
            {
                mid=(r+l)/2;
                product = ((1L*spells[i]*potions[mid]))%LLONG_MAX;
                if(product>=success)
                {
                    cnt=n-mid+1;
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            ans.push_back((int)cnt);
        }
        return ans;
    }
};
