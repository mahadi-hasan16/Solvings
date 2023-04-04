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
    bool check(string s1,string s2)
    {
        int i,l=s1.size(),j=0;
        for(i=0;i<l;i++)
        {
            if(s1[i]==s2[j])
                j++;
        }
        if(s2.size()-j==0)
            return true;
        else
            return false;
    }
public:
    Maha()
    {
        string s,s1,s2;
        cin>>s1>>s2;
        int n=s1.size();
        int i,a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        int low=0, high=n-1,mid;
        while(low+1<high)
        {
            mid=(low+high)/2;
            s=s1;
            for(i=low;i<=mid;i++)
                s[a[i]-1]='0';
            if(check(s,s2))
            {
                low=mid;
                s1=s;
            }
            else
                high=mid;
        }
        s1[a[low]-1]='0';
        if(check(s1,s2)==false)
            low=-1;
        if(low>-1)
        {
            s1[a[high]-1]='0';
            if(check(s1,s2))
            low=high;
        }
        cout<<low+1;
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
