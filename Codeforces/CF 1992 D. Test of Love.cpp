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

int main()

{
    w(t)
    {
        int m,n,k;
        cin>>n>>m>>k;
        char a[n];
        int i,j;
        for(i=0;i<n;i++)
            cin>>a[i];


        int w = 0;
        int c = 0;
        int jump = m-1;

        for(i=0;i<n;i++)
        {
            if(a[i] == 'L')
                jump = m;
            else if(a[i] == 'W' and jump<= 0)
                w++;
            else if(a[i] == 'C' and jump<= 0)
                c++;
            jump--;
        }

        if(w>k)
            c++;

        if(c == 0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
