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
    int task(int n)
    {
        int i;
        for(i=3;i*i<=n;i+=2)
        {
            if(n%i==0)
                return i;
        }
        return -1;
    }
public:
    Maha()
    {
        w(t)
        {
            int n,k;
            cin>>n;
            if(n%2==0)
                cout<<n/2<<" "<<n/2<<nl;
            else
                {
                    k=task(n);
                    if(k>1)
                        cout<<n/k<<" "<<n-(n/k)<<nl;
                    else
                        cout<<"1 "<<n-1<<nl;
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
