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
    ll Inverse_count(int a[],int n)
    {
        ll one=0,result=0,i;
        for(i=0;i<n;i++)
        {
            if(a[i]==1)
                one++;
            else
                result+=one;
        }
        return result;
    }
public:
    Maha()
    {
        w(t)
        {
            int n;
            cin>>n;
            int a[n];
            int i,j,pos1=-1,pos2=-1;
            for(i=0;i<n;i++)
            {
                cin>>a[i];
                if(a[i]==0 and pos1<0)
                    pos1=i;
                if(a[i]==1 and i>0)
                    pos2=i;
            }
            ll ans=Inverse_count(a,n);
            if(pos1>=0)
            {
                a[pos1]=1;
                ans=max(ans,Inverse_count(a,n));
                a[pos1]=0;
            }
            if(pos2>0)
            {
                a[pos2]=0;
                ans=max(ans,Inverse_count(a,n));
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
