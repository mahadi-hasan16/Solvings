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
struct vejal
{
    string st; 
    ll k; 
};
class Maha{
    bool static sort_kor(vejal v1, vejal v2)
    {
        if(v1.st<v2.st)
            return true;
        else
            return false;
    }
public:
    Maha()
    {
        w(t)
        {
            int n,i;
            cin>>n;
            string s;
            cin>>s;
            vejal a[n-1];
            for(i=0;i<n-1;i++)
            {
                a[i].st.pb(s[i]);
                a[i].st.pb(s[i+1]);
                a[i].k=2*i+1;
            }
            sort(a,a+n-1,sort_kor);
            for(i=0;i<n-2;i++)
            {
                if(a[i].st==a[i+1].st and abs(a[i].k-a[i+1].k)==2)
                    swap(a[i],a[i+1]); 
            }
            bool kismot=0;
            for(i=0;i<n-2;i++)
            {
                if(a[i].st==a[i+1].st and abs(a[i].k-a[i+1].k)>2)
                {
                    kismot=1;
                    break;
                }
            }
            if(kismot)
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
