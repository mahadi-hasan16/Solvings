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
class Query{
public:
    ll a;
    int b;
};
class Maha{
    static bool cmp(Query one,Query two)
    {
        if(one.a<two.a)
            return true;
        else
            return false;
    }
public:
    Maha()
    {
        w(t)
        {
            int n,q,i,j,k;
            cin>>n>>q;
            int height[n+1]={0};
            Query question[q];
            ll sum[n+2]={0};
            for(i=1;i<=n;i++)
            {
                cin>>height[i];
                sum[i]=(sum[i-1]+height[i]);
            }
            for(i=0;i<q;i++)
            {
                cin>>question[i].a;
                question[i].b=i;
            }
            sort(question,question+q,cmp);
            ll ans[q]={0};
            k=0;
            for(i=0;i<q;i++)
            {
                while(1)
                {
                    if(k==n or height[k+1]>question[i].a)
                        break;
                    k++;
                }
                ans[question[i].b]=sum[k];
            }
            for(i=0;i<q;i++)
            {
                cout<<ans[i]<<" ";
            }
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
