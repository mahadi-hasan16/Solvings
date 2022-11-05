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
    int i,j;
public:
    Maha()
    {
        w(t)
        {
            int n,x,power=0,ans=0;
            cin>>n;
            int a[n];
            for(i=0;i<n;i++)
                cin>>a[i];
            for(i=0;i<n;i++)
            {
                x=a[i];
                while(x%2==0)
                {
                    x/=2;
                    power++;
                }
            }
            if(power>=n)
                cout<<"0\n";
            else
            {
                x=floor(log2(n));
                int arr[x]={0};
                arr[x-1]=1;
                int sum=1;
                for(i=x-2;i>=0;i--)
                {
                    arr[i]=(n/pow(2,i+1))-sum;
                    sum+=arr[i];
                }
                // for(i=x-1;i>=0;i--)
                //     cout<<arr[i]<<" "<<i+1<<nl;
                // cout<<nl;
                for(i=x-1;i>=0 and power<n;i--)
                {
                    for(j=1;j<=arr[i] and power<n;j++)
                    {
                        power+=(i+1);
                        ans++;
                    }
                }
                if(power>=n)
                    cout<<ans<<nl;
                else
                    cout<<"-1\n";
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
