class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1,0);
        int i;
        ans[0]=0;
        int lg;
        for(i=1;i<=n;i++)
        {
            lg = log2(i);
            ans[i] = 1 + ans[i - pow(2,lg)];
        }
        return ans;
    }
};
