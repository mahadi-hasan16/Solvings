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
#define debug(x) cout<<x<<" "
typedef long long ll;
using namespace std;

class Maha{
    int i,n,d,k,j,ans,h;
public:
    Maha()
    {
        cin>>n>>d;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        ans=0,j=h=0;
        for(i=n-1;i>=0;i--)
        {
            if(a[i]>d)
                {
                    a[i]=0;
                    n--;
                    ans++;
                }
            else
            {
                k=0;
                while(k*a[i]<=d)
                    k++;
                if(n<k)
                    break;
                ans++;
                n-=k;
            }
        }
        cout<<ans<<nl;
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
