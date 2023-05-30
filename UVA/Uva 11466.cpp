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
void task()
{
    ll a,n,m,t,b=0,c,i=1,j=0,aa,dk=0,ck=0;
    while(cin>>n && n!=0)
    {
        if(n<0)
            n*=-1;
        dk = -1, ck=0;
        for(i=2; i*i<=n && n!=1; i++)
        {
            while(n%i==0)
            {
                n/=i;
                dk = i;
            }
            if(dk==i)
                ck++;
    }
    if(n!=1 && dk!=-1)
        dk = n;
    else if(ck==1)
        dk = -1;
   cout<<dk<<endl;
  }
}
signed main()
{
    //ios::sync_with_stdio(0);
   //cin.tie(0);
   //cout.tie(0);
    task();
    return 0;
}
