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
ll i,mod=10e9+7;
class Maha{
public:
    Maha()
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>v;
        for(i=1;i*i<=n+1;i++)
        {
            if(n%i==0)
            {
                if(i*i==n)
                    v.eb(i);
                else
                {
                    v.eb(i);
                    v.eb(n/i);
                }
            }
        }
        if(v.size()<k)
            cout<<-1<<nl;
        else
        {
            sort(all(v));
            // for(i=0;i<v.size();i++)
                cout<<v[k-1]<<nl;
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
