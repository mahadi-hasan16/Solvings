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
#define Case(cs) printf("Case %d: ",++cs)
#define debug(x) cout<<x<<" ";
typedef long long ll;
using namespace std;
ll mod=10e9+7;
class Maha{
public:
    Maha()
    {
        w(t)
        {
            int i,n,k,l,r;
            cin>>n>>k;
            ll a[n],sum=0;
            for(i=0;i<n;i++)
                cin>>a[i];
            sort(a,a+n);
            for(i=1;i<n;i++)
                a[i]+=a[i-1];
            for(i=0;i<k;i++)
                sum=max(sum,a[n-i-1]-a[2*(k-i)-1]);
            cout<<max(sum,a[n-k-1])<<nl;
        }
    }
};

signed main()
{
    //ios::sync_with_stdio(0);
   //cin.tie(0);
   //cout.tie(0);
    Maha maha;
    return 0;
}
