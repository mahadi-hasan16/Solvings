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
public:
    Solve()
    {
        w(t)
        {
            string s;
            int n,ans;
            cin>>n>>s;
            int f[26]={0};
            for(i=0;i<n;i++)
                f[s[i]-'a']++;
            sort(f,f+26); 
            if(f[25]>(n/2))
                ans=2*f[25]-n;
            else if(n%2)
                ans=1;
            else
                ans=0;
            cout<<ans<<nl;
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
