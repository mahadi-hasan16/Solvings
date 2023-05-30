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
    int tallest(int a[], int size, int k)
    {
        int i, ans,l=0,h=size-1,mid;
        while(h-l>1)
        {
            mid=(l+h)/2;
            if(k>a[mid])
                l=mid;
            else
                h=mid-1;
        }
        if(a[h]<k)
            return a[h];
        else
            return a[l];
    }
    int smallest(int a[],int size, int k)
    {
        int i, ans,l=0,h=size-1,mid;
        while(h-l>1)
        {
            mid=(l+h)/2;
            if(k<a[mid])
                h=mid;
            else
                l=mid+1;
        }
        if(a[l]>k)
            return a[l];
        else
            return a[h];
    }
public:
    Maha()
    {
        int n,i,k;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        int m;
        cin>>m;
        int q[m];
        for(i=0;i<m;i++)
            cin>>q[i];
        for(i=0;i<m;i++)
        {
            if(a[n-1]==q[i])
                cout<<"X X\n";
            else if(a[n-1]<q[i])
                cout<<a[n-1]<<" X\n";
            else if(a[0]>=q[i])
                cout<<"X "<<smallest(a,n,q[i])<<nl;
            else
                cout<<tallest(a,n,q[i])<<' '<<smallest(a,n,q[i])<<nl;
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
