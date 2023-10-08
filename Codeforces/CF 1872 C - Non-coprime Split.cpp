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

class Maha{
public:
    Maha()
    {
        w(t)
        {
            int l,r;
            cin>>l>>r;
            if(r<4)
                cout<<"-1\n";
            else
            {
                if(l==r)
                {
                    if(l%2)
                    {
                        int sq=sqrt(l);
                        for(i=sq;i>=2;i--)
                        {
                            if(__gcd(i,(l-i))!=1)
                            {
                                cout<<i<<" "<<l-i<<nl;
                                l=0;
                                break;
                            }
                        }
                        if(l)
                            cout<<"-1\n";
                    }
                    else
                        cout<<l/2<<" "<<l/2<<nl;
                }
                else
                {
                    if(r%2)
                        r--;
                    cout<<r/2<<" "<<r/2<<nl;
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
