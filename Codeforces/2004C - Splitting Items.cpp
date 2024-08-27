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
        int n, k, i, alice = 0, bob = 0;

        cin>>n>>k;

        int cost[n];

        for(i = 0; i < n; i ++)
            cin>>cost[i];

        sort(cost, cost + n);

        for(i = n - 1; i >= 0; i -= 2)
            alice += cost[i];

        for(i = n - 2; i >= 0; i -= 2)
        {
            bob += min(cost[i+1], cost[i] + k);
            k -= min(cost[i+1], cost[i] + k) - cost[i];
        }

        cout<<max(0, alice - bob)<<nl;

    }
    return 0;
}
