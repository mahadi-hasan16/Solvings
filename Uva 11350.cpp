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
struct fraction
{
    ll n,d;
};
class Maha{
public:
    Maha()
    {
        w(t)
        {
            int i,l;
            string s;
            cin>>s;
            l=s.size();
            fraction f,low={0,1},high={1,0};
            for(i=0;i<l;i++)
            {
                f={low.n+high.n,low.d+high.d};
                // cout<<low.n<<"/"<<low.d<<" "<<f.n<<"/"<<f.d<<" "<<high.n<<"/"<<high.d<<nl;
                if(s[i]=='L')
                    high=f;
                else
                    low=f;
            }
            f={low.n+high.n,low.d+high.d};
            cout<<f.n<<"/"<<f.d<<nl;
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
