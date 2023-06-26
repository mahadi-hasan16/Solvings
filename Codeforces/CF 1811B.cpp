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
class Maha{
    static int find_ribbon(int n,int x,int y)
    {
        int half=n/2,x1,y1;
        if(x<=half)
            x1=abs(half-x)+1;
        else
            x1=abs(half-x);
        if(y<=half)
            y1=abs(half-y)+1;
        else
            y1=abs(half-y);
        return max(x1,y1);
    }
public:
    Maha()
    {
        w(t)
        {
            int n,x1,y1,x2,y2,ans,diff; 
            cin>>n>>x1>>y1>>x2>>y2;
            diff=abs(find_ribbon(n,x1,y1)-find_ribbon(n,x2,y2));
            cout<<diff<<nl;
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
