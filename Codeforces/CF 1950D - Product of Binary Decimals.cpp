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
ll mod=1e9+7;
class Solve{
public:
    static bool test(string s)
    {
        int one=count(all(s),'1');
        int zero=count(all(s),'0');
        int total=one+zero;
        return (total==s.size());
    }
    Solve()
    {
        int a[31]={0};
        string s;
        int n,i;
        for(i=1;i<32;i++)
        {
            s=bitset<8>(i).to_string();
            n=stoi(s);
            a[i-1]=n;
        }
        w(t)
        {
            cin>>n;
            s=to_string(n);
            if(test(s))
            {
                cout<<"YES\n";
                continue;
            }
            for(i=1;i<31;i++)
            {
                while(n%a[i]==0 and n>1)
                    n/=a[i];
            }
            s=to_string(n);
            if(test(s))
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
};
 
signed main()
{
    //ios::sync_with_stdio(0);
   //cin.tie(0);
   //cout.tie(0);
    Solve s;
    return 0;
}
