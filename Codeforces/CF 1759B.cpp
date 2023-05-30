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
    bool check(ll n, int mx)
    {
        ll find=0,i=mx;
        while(true)
        {
            find=0.5*i*(i+1);
            if(n==find)
                return true;
            if(n<find)
                return false;
            i++;
        } 
    }
public:
    Maha()
    {
        w(t)
        {
            int m,s,x,i,mx=0;
            cin>>m>>s;
            ll sum=0;
            for(i=0;i<m;i++)
            {
                cin>>x;
                mx=max(mx,x);
                sum+=x;
            }
            sum+=s;
            if(check(sum,mx))
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
