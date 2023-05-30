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
            int n,k,i;
            cin>>k>>n;
            bool track[n+1]={0};
            int a[k];
            a[k-1]=n,track[n]=1;
            a[0]=1,track[1]=1,a[1]=2, track[2]=1;
            for(i=k-2;i>1;i--)
            {
                if((i*(i+1)/2)+1<n and !track[(i*(i+1)/2)+1])
                {
                    a[i]=(i*(i+1)/2)+1;
                    track[(i*(i+1)/2)+1]=1;
                }
                else
                {
                    a[i]=a[i+1]-1;
                    track[a[i+1]-1]=1;
                }
            }
            for(i=0;i<k;i++)
                cout<<a[i]<<" ";
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
