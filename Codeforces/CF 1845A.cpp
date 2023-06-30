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
public:
    Maha()
    {
        w(t)
        {
            int n,k,x;
            cin>>n>>k>>x;
            if(x!=1)
            {
                cout<<"YES\n"<<n<<nl;
                for(i=0;i<n;i++)
                    cout<<"1 ";
                cout<<endl;
            }
            else
            {
                if(n%2)
                {
                    if(k<=2)
                        cout<<"NO\n";
                    else
                    {
                        cout<<"YES\n"<<((n-3)/2)+1<<nl;
                        cout<<"3 ";
                        for(i=0;i<(n-3)/2;i++)
                            cout<<"2 ";
                        cout<<nl;
                    }
                }
                else
                {
                    if(k>1)
                    {
                        cout<<"YES\n"<<n/2<<nl;
                        for(i=0;i<n/2;i++)
                            cout<<"2 ";
                        cout<<nl;
                    }
                    else
                        cout<<"NO\n";
                }
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
