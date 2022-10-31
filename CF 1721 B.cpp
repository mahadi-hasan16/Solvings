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
#define debug(ok) cout<<ok<<" ";
typedef long long ll;
using namespace std;
class Maha{
public:
	int n,m,sx,sy,i,d,path1,path2,ans;
	Maha()
	{
		w(t)
		{
			ans=-1;
			cin>>n>>m>>sx>>sy>>d;
			path1=min(abs(sx-1),abs(sy-m));
			path2=min(abs(sy-1),abs(sx-n));
			if(path1<=d and path2<=d)
				ans=-1;
			else
				ans=m+n-2;
			cout<<ans<<nl;
		}
	}
};
signed main() 
{
	Maha m;
    return 0;
}