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
    int sumCount(int a[], int n,int k)
    {
        int i,sum=0;
        for(i=0;i<n;i++)
            sum+=ceil((double)(a[i]/(double)k));
        return sum;
    }
    int ansFind(int a[],int n,int m)
    {
        int l=1,h=1000000005,mid,ans;
        {
            while(l<=h)
            {
                mid=(l+h)/2;
                if(sumCount(a,n,mid)<=m)
                {
                    ans=mid;
                    h=mid-1;
                } 
                else
                    l=mid+1;
            }
        }
        return ans;
    }
public:
    Maha()
    {
        int n,h;
        w(t)
        {
            cin>>n>>h;
            int a[n];
            for(int i=0;i<n;i++)
                cin>>a[i];
            cout<<ansFind(a,n,h)<<nl;
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
