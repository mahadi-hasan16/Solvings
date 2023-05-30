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
        w(t)
        {
            int n,i,m,k,j;
            cin>>n;
            if(n==1)
                cout<<"1\n1 3\n";
            else
            {
                int ans=(n+1)/2;
                cout<<ans<<nl;
                j=1,k=3*n;
                for(i=0;i<ans;i++)
                {
                    cout<<j<<" "<<k<<nl;
                    j+=3;
                    k-=3;
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
