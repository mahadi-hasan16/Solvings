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
#define w(x) int x;scanf("%d",&x);while(x--)
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
        ll n,x,y,i,copies=1,mid;
        cin>>n>>x>>y;
        ll t1=min(x,y);
        ll t2=max(x,y);
        ll l=0,h=n*t2;
        mid=l+(h-l)/2;
        while(l+1<h)
        {
            mid=l+(h-l)/2;
            copies=((mid-t1)/t1)+((mid-t1)/t2);
            if(copies<n-1 or mid<t1)
                l=mid;
            else
                h=mid;
        }
        cout<<h<<nl;
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
