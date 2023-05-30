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
    ll n,i,j,temp;
    while(cin>>n and n!=-1)
    {
        for(i=2;i*i<=n and n!=1;i++)
        {
            while(n%i==0)
            {
                temp=i;
                n/=i;
                cout<<"    "<<i<<nl;
            }  
        }
        if(n>1)
            cout<<"    "<<n<<nl;
        cout<<nl;
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
