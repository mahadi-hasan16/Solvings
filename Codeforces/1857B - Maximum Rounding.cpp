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

class Maha{
public:
    Maha()
    {
        w(t)
        {
            string s;
            cin>>s;
            for(i=s.size()-1;i>0;i--)
            {
                if(s[i]>'4')
                {
                    if((s[i-1]<'6'))
                        s[i-1]++;
                }
            }
            for(i=0;i<s.size();i++)
            {
                if(s[i]>='5')
                {
                    for(j=i;j<s.size();j++)
                        s[j]='0';
                    break;
                }
            }
            if(s[0]=='0')
                s='1'+s;
            cout<<s<<nl;
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
