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
public:
    Maha()
    {
        double c;
        cin>>c;
        double l=0,h=1e10+1,mid,equation;
        while(h-l>1e-6)
        {
            mid=l+(h-l)/2;
            equation=mid*mid+sqrt(mid);
            if(equation<c)
                l=mid;
            else
                h=mid;
        }
        cout<<setprecision(20)<<h<<nl;
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
