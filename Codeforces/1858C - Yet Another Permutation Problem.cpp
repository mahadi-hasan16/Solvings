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

int scant[55][55];

class Maha{
public:
    Maha()
    {
        w(t)
        {
            int n,d=0;
            cin>>n;
            int h[n+1]={0};
            int a[n]={0};
            a[0]=1;
            j=1;
            for(i=2;i<=n;i++)
            {
                k=i;
                if(k%2)
                {
                    d=k;
                    k*=2;
                }
                while(k<=n and h[k]==0)
                {
                    a[j]=k;
                    h[k]=1;
                    k*=2;
                    j++;
                }
                if(d)
                {
                    a[j]=d;
                    h[d]=1;
                    j++;
                    d=0;
                }
            }
            for(i=0;i<n;i++)
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
