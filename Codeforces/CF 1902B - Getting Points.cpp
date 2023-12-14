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
ll i,j,k,mod=10e9+7;
vector<int> graph[10];
vector<bool>visited;
class Solve{
    bool decider(ll days, ll task, ll l, ll t, ll p)
    {
        ll d = days*l + min(task, 2*days)*t;
        if(d>=p)
            return true;
        else
            return false;
    }
public:
    Solve()
    {
        w(t)
        {
            ll n,p,l,t;
            cin>>n>>p>>l>>t;
            ll task = n/7;
            if(n%7)
                task++;
            ll low=1,high=n;
            ll m = (low+high)/2;
            while(low<high)
            {
                if(decider(m,task,l,t,p))
                    high=m;
                else
                    low=m+1;
                m = (low+high)/2;
            }
            cout<<n-high<<nl;
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
