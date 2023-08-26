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
ll i,j,mod=10e9+7;

int scant[55][55];

class Maha{
public:
    Maha()
    {
        w(t)
        {
            int n,k;
            cin>>n>>k;
            string s;
            cin>>s;
            string s1="",s2="";
            if(k%2==0)
            {
                sort(all(s));
                cout<<s<<nl;
            }
            else
            {
                for(i=0;i<s.size();i+=2)
                    s1.pb(s[i]);

                for(i=1;i<s.size();i+=2)
                    s2.pb(s[i]);

                sort(all(s1));
                sort(all(s2));

                for(i=0;i<s.size();i+=2)
                    s[i]=s1[i/2];

                for(i=1;i<s.size();i+=2)
                    s[i]=s2[i/2];

                cout<<s<<nl;
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
