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

class Solve{
    int i,j,k,l;
    string factorial[10001];
public:
    string multiply(string s, int i)
    {
        l=s.size();
        int r,q=0;
        string ans;
        for(j=0;j<l;j++)
        {
            k=i*(s[j]-48);
            r=(k+q)%10;
            q=(k+q)/10;
            ans.pb(r+48);
    }
        while(q>0)
        {
            r=q%10;
            q/=10;
            ans.pb(r+48);
        }
        return ans;
    }
    Solve()
    {
        factorial[0]=factorial[1]="1";
        for(i=2;i<=10000;i++)
            factorial[i]=multiply(factorial[i-1],i);
        // for(i=0;i<=370;i++)
        //  cout<<factorial[i]<<"\n";
    }
    char count(string s)
    {
        char ans;
        l=s.size();
        for(i=0;i<l;i++)
        {
            if(s[i]!='0')
            {
                ans=s[i];
                break;
            }
        }
        return ans;  
    }
    void task(int n)
    {
        cout<<setw(5)<<n<<" -> "<<count(factorial[n])<<nl;
    }
};

signed main()
{
    //ios::sync_with_stdio(0);
   //cin.tie(0);
   //cout.tie(0);
    int n;
    Solve s;
    while(cin>>n)
    {
        s.task(n);
    }
    return 0;
}
