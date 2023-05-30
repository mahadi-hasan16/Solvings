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
typedef long long ll;
using namespace std;

class Solve{
    int i,n,count;
    string ans;
public:
    void task()
    {
        w(t)
        {
            cin>>n;
            if(n<10)
            {
                cout<<n<<nl;
                continue;
            }
            count=0;
            for(i=2;i<=9;i++)
            {
                if(n%i==0 and (n/i)<10)
                {
                    ans.pb(48+i);
                    ans.pb(48+(n/i));
                    count=2;
                    break;
                }
            }
            if(count!=2)
                cout<<"-1"<<nl;
            else
                cout<<ans<<nl;
            ans.clear();
        }
        return;
    }
};

signed main()
{
    //ios::sync_with_stdio(0);
   //cin.tie(0);
   //cout.tie(0);
    Solve maha;
    maha.task();
    return 0;
}
