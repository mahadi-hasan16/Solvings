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
class Maha{
    int find_ans(ll n)
    {
        int i,result=0;
        for(i=1;i*1ll*i<=n;i++)
        {
            if(n%i==0)
                result+=2;
        }
        i--;
        if(i*1ll*i==n)
            result--;
        return result;
    }
public:
    Maha()
    {
        int n,i;
        ll x,gcd=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            gcd=__gcd(gcd,x);
        }
        cout<<find_ans(gcd)<<nl;
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
