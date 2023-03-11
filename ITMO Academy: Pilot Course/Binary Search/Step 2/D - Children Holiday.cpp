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
struct assistant
{
    ll t,y,z;
};
class Maha{
    ll hisab(ll k,assistant &a)
    {
        ll tt=(a.t*a.z)+a.y;
        ll count=(k/tt)*a.z;
        ll r=k%tt;
        if(r/a.t>=a.z)
            count+=a.z;
        else
            count+=(r/a.t);
        return count;
    }
public:
    Maha()
    {
        ll m,n,i;
        cin>>m>>n;
        assistant a[n];
        for(i=0;i<n;i++)
            cin>>a[i].t>>a[i].z>>a[i].y;
        ll l=-1,h=2e9+1,mid,sum;
        while(l+1<h)
        {
            mid=l+(h-l)/2;
            sum=0;
            for(i=0;i<n;i++)
                sum+=hisab(mid,a[i]);
            if(sum<m)
                l=mid;
            else
                h=mid;
        }
        cout<<h<<nl;
        for(i=0;i<n;i++)
        {
            if(i>0)
                cout<<" ";
            ll d=hisab(h,a[i]);
            cout<<min(m,d);
            m-=min(m,d);
        }
        cout<<nl;
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
