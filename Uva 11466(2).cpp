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
public:
    Maha()
    {
        ll n,i,c;
        while(cin>>n and n!=0)
        {
            ll cnt=0;
            if(n<0)
                n=abs(n);
            if(n%2==0)
                cnt++;
            while(n%2==0)
                n/=2;
            c=2;
            if(n>1)
            {
                for(i=3;i*i<=n;i++)
                {
                    if(n%i==0)
                    {
                        c=i;
                        cnt++;
                        while(n%i==0)
                            n/=i;
                    }
                }
            }
            if(n>1 and n!=c)
                cnt++;
            // cout<<cnt<<" "<<n<<" "<<c<<nl;
            if(cnt<2)
                cout<<"-1\n";
            else
            {
                if(n==1)
                    cout<<c<<nl;
                else
                    cout<<n<<nl;
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