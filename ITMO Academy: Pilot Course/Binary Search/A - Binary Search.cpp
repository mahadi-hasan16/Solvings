
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
ll mod=10e9+7;
class Maha{
    bool binary_search(int a[], int n,int k)
    {
        int l=0,h=n-1;
        int mid;
        bool paisi=0;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(k==a[mid])
            {
                paisi=1;
                break;
            }
            if(k<a[mid])
                h=mid-1;
            else
                l=mid+1;
        }
        return paisi;
    }
public:
    Maha()
    {
        int n,k,i,h;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<k;i++)
        {
            cin>>h;
            if(binary_search(a,n,h))
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
