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
     int h_search(int a[], int n,int k)
    {
        int l=0,h=n-1;
        int mid=(l+h)/2;
        int ans=n;
        while(h-l>1)
        {
            if(a[mid]<=k)
                l=mid+1;
            else
                h=mid;
            mid=(l+h)/2;
        }
        if(k<a[l])
            ans=l;
        else if(k<a[mid])
            ans=mid;
        else if(k<a[h])
            ans=h;
       return ans+1;
    }
 
    int l_search(int a[], int n,int k)
    {
        int l=0,h=n-1;
        int mid=(l+h)/2;
        int ans=-1;
        while(h-l>1)
        {
            if(a[mid]>=k)
                h=mid-1;
            else
                l=mid;
            mid=(l+h)/2;
        }       
        if(k>a[h])
            ans=h;
        else if(k>a[mid])
            ans=mid;
        else if(k>a[l])
            ans=l;
        return ans+1;
    }
public:
    Maha()
    {
        int n,k,i,l,h;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        cin>>k;
        for(i=0;i<k;i++)
        {
            cin>>l>>h;
            // cout<<h_search(a,n,h)<<" "<<l_search(a,n,l)<<"\n";
            cout<<h_search(a,n,h)-1-l_search(a,n,l)<<" ";
        }
        cout<<nl;
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
