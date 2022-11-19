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
            int i;
            bool ans=1;
            string s;
            cin>>s;
            for(i=0;i<s.size();i++)
            {
                if(s[i]!='Y' and s[i]!='e' and s[i]!='s')
                {
                    ans=0;
                    break;
                }
            }
            for(i=0;i<s.size()-1 and ans;i++)
            {
                if((s[i]=='Y' and s[i+1]!='e') or (s[i]=='e' and s[i+1]!='s') or (s[i]=='s' and s[i+1]!='Y'))
                {
                    ans=0;
                    break;
                }
            }
            if(ans)
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
    Maha maha;
    return 0;
}
