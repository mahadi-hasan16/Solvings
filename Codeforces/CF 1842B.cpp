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
            ll n,x,i,u=0; 
            cin>>n>>x;
            ll a[n],b[n],c[n];
            for(i=0;i<n;i++)
                cin>>a[i];
            for(i=0;i<n;i++)
                cin>>b[i];
            for(i=0;i<n;i++)
                cin>>c[i];
            if(x==u)
            {
                cout<<"YES\n";
                continue;
            }
            for(i=0;i<n;i++)
            {
                if((x&a[i])+(x^a[i])==x)
                    u|=a[i];
                else
                    break;
            }
            for(i=0;i<n;i++)
            {
                if((x&b[i])+(x^b[i])==x)
                    u|=b[i];
                else
                    break;
            }
            for(i=0;i<n;i++)
            {
                if((x&c[i])+(x^c[i])==x)
                    u|=c[i];
                else
                    break;
            }
            if(u==x)
                cout<<"YES\n";
            else
                cout<<"NO\n";
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
