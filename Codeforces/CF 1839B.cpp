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

struct Lamp
{
    int a,b;
};

class Maha{
    static bool cmp(Lamp l1, Lamp l2)
    {
        if(l1.a==l2.a)
            return l1.b>l2.b;
        else
            return l1.a<l2.a;
    }
public:
    Maha()
    {
        w(t)
        {
            int n,j=0,k=0;
            cin>>n;
            Lamp l[n];
            for(i=0;i<n;i++)
                cin>>l[i].a>>l[i].b;
            sort(l,l+n,cmp);
            ll ans=0;
            i=0;
            while(i<n)
            {
                if(k!=l[i].a)
                {
                    j=l[i].a;
                    k=j;
                    while(j-- and l[i].a==k)
                    {
                        ans+=l[i].b;
                        i++;
                    }
                }
                else
                    i++;
            }
            cout<<ans<<nl;
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
