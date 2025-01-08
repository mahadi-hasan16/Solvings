/*
MD. MAHADI HASAN
Dept. of Computer Science and Telecommunication Engineering (CSTE).
Noakhali Science and Technology University (NSTU).
*/
#include<bits/stdc++.h>
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define pi acos(-1)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define all(v) v.begin(),v.end()
#define w(x) long long x;scanf("%lld",&x);while(x--)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n"
#define Case(cs) printf("Case %d:",++cs)
#define Bhul_khuji(x) cout<<x<<" ";
typedef long long ll;
using namespace std;
ll mod=1e9+7;

signed main()
{
    int n, i, j, k, l, r;
    cin>>n>>k;
    int a[n];
    int neg=0, pos=0, init=-1;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=0 and init==-1)
            init=i;
        if(a[i]<0)
            neg++;
        else
            pos++;
    }

    if(pos == 0)
        init = n;

    l= min(neg,k);
    r= min(pos, k);

    int ans = INT_MAX;

    if(l >= k)
        ans = min(ans, abs(a[init-l]));
    if(r >= k)
        ans = min(ans, a[init+r-1]);

    j=init-l, i=j+k-1;
    if(i<init)
    {
        i++;
        j++;
    }

    for(;j<init and i<n and l>0;)
    {
        ans = min(ans, (2*abs(a[j])+a[i]));
        ans = min(ans, (abs(a[j])+2*a[i]));

        j++;
        i++;
    }

    cout<<ans<<nl;
    return 0;
}
