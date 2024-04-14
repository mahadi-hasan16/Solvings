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
ll i,j;
class Solve{
public:
    Solve()
    {
        w(t)
        {
            ll a,b,l,x,y;
            cin>>a>>b>>l;
            vector<ll> v1,v2;
            ll lm=1e6+10;
            for(i=0;i<21;i++)
            {
                x=pow(a,i);
                if(l%x==0)
                    v1.eb(x);
                if(x>l)
                    break;
            }
            for(i=0;i<21;i++)
            {
                y=pow(b,i);
                if(l%y==0)
                    v2.eb(y);
                if(y>l)
                    break;
            }
            set<ll>ans;
            for(i=0;i<v1.size();i++)
            {
                for(j=0;j<v2.size();j++)
                {
                    if(l%(v1[i]*v2[j])==0)
                        ans.insert(v1[i]*v2[j]);
                    if(v1[i]*v2[j]>l)
                        break;
                }
            }
            cout<<ans.size()<<nl;
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
