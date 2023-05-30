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
            int n,i,ans=0,j,k;
            cin>>n; 
            int a[n];
            for(i=0;i<n;i++)
                cin>>a[i];
            sort(a,a+n);
            for(k=1;2*k-2<n;k++)
            {
                for(j=2*k-2,i=k;j>=k-1;j--,i--)
                {
                    if(a[j]>i)
                        break;
                }
                if(i==0)
                    ans=k;
                else
                    break;
            }
            cout<<ans<<nl;
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
