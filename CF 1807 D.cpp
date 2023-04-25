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
            int n,q,l,r,i,k,sum;
            cin>>n>>q;
            int a[n];
            for(i=0;i<n;i++)
            {
                cin>>a[i];
                if(i>0)
                    a[i]+=a[i-1];
            }
            while(q--)
            {
                cin>>l>>r>>k;
                if(k%2)
                    k=1;
                else
                    k=2;
                if(l>1)
                sum=a[n-1]-a[r-1]+a[l-2];
                else
                    sum=a[n-1]-a[r-1];
                if(sum%2)
                    sum=1;
                else
                    sum=2;
                if((sum+(r-l+1)*k)%2)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
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
