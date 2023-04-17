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
            int l,r,i,ans,mn,diff,mx;
            string s;
            cin>>l>>r;
            mn=min(r,l+101);
            s=to_string(l);
            sort(all(s));
            mx=s[s.size()-1]-s[0];
            ans=l;
            for(i=l+1;i<=mn;i++)
            {
                s=to_string(i);
                sort(all(s));
                diff=s[s.size()-1]-s[0];
                if(diff>mx)
                {
                    mx=diff;
                    ans=i;
                }
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
