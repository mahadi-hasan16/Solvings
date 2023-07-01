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
#define debug(x) cout<<x<<" ";
typedef long long ll;
using namespace std;
ll i,j,mod=10e9+7;

#define N 105
vector<int> adj[N];
bool visited1[N]={0}, visited2[N]={0};
int off;

class Maha{
    static void dfs_all(int s)
    {
        if(visited1[s])
            return;
        visited1[s]=1;
        for(auto it:adj[s])
            dfs_all(it);
    }
    static void dfs_check(int s)
    {
        if(visited2[s] or s==off)
            return;
        visited2[s]=1;
        for(auto it:adj[s])
            dfs_check(it);
    }
public:
    Maha()
    {
        int cs=0;
        w(t)
        {
            int n,x;
            cin>>n;
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    cin>>x;
                    if(x)
                        adj[i].eb(j);
                }
            }
            dfs_all(0);
            char ans[n][n];
            for(i=0;i<n;i++)
            {
                if(visited1[i])
                    ans[0][i]='Y';
                else
                    ans[0][i]='N';
            }
            for(i=1;i<n;i++)
            {
                off=i;
                dfs_check(0);
                for(j=0;j<n;j++)
                {
                    if(visited1[j] and !visited2[j])
                        ans[i][j]='Y';
                    else
                        ans[i][j]='N';
                    visited2[j]=0;
                }
            }
            string line="+";
            for(i=1;i<2*n;i++)
                line+="-";
            line+="+";
            Case(cs);
            cout<<nl;
            for(i=0;i<n;i++)
            {
                cout<<line<<nl;
                for(j=0;j<n;j++)
                {
                    cout<<'|'<<ans[i][j];
                }
                cout<<"|\n";
                visited1[i]=visited2[i]=0;
                adj[i].clear();
            }
            cout<<line<<nl;
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
