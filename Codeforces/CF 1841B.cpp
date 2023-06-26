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
struct s
{
    int data, pos;
};
class Maha{
public:
    Maha()
    {
        w(t)
        {
            int q,x,f,prev=-1;
            bool k=1;
            cin>>q;
            int a[q];
            for(i=0;i<q;i++)
                cin>>a[i];
            f=a[0];
            for(i=0;i<q;i++)
            {
                if(k)
                {
                    if(a[i]>=prev)
                    {
                        cout<<"1";
                        prev=a[i];
                    }
                    else if(a[i]<prev and a[i]<=f)
                    {
                        cout<<"1";
                        prev=a[i];
                        k=0;
                    }
                    else
                        cout<<"0";
                }
                else
                {
                    if(a[i]>=prev and a[i]<=f)
                    {
                        cout<<"1";
                        prev=a[i];
                    }
                    else
                        cout<<"0";
                }
            }
            cout<<nl;
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
