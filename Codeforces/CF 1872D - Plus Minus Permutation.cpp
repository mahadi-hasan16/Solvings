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
#define lcm(a,b) ((a*b)/__gcd(a,b))
#define all(v) v.begin(),v.end()
#define w(x) long long x;scanf("%lld",&x);while(x--)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n"
#define Case(cs) printf("Case %d:",++cs)
#define Bhul_khuji(x) cout<<x<<" ";
typedef long long ll;
using namespace std;
ll i,j,k,mod=10e9+7;

class Solve{
public:
    Solve()
    {
        w(t)
        {
            ll n,x,y; 
            cin>>n>>x>>y;
            ll p= n/lcm(x,y); 
            ll r=(n/x)-p; 
            ll b=(n/y)-p;
            ll ans=((r*(2*n-r+1))-(b*(2+b-1)))/2;
            cout<<ans<<nl;
        }
    }
};

signed main()
{
    //ios::sync_with_stdio(0);
   //cin.tie(0);
   //cout.tie(0);
    Solve s;
    return 0;
}
