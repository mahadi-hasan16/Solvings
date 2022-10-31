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

class Maha{
    int count;
    int factorial(int base)
    {
        int i,factor,n;
        n=base;
        for(i=2;i*i<=n;i++)
        {
            count=0;
            while(n%i==0)
            {
                n/=i;
                count++;
            }
            if(n==1)
                break;
        }
        if(n>1)
        {
            factor=n;
            count=1;
        }
        else
            factor=i;
        return factor;
    }
    int findZeors(int n,int b)
    {
        int zeros=0;
        int i,j,factor;
        factor=factorial(b);
        // cout<<"Count = "<<count;
        while(n>=1)
        {
            n/=factor;
            zeros+=n;
        }
        return (zeros/count);
    }
    int findDigits(int n,int b)
    {
        int i;
        double digits = 0;
		for (i = 1; i <= n; ++i)
			digits += log(i);

		digits /= log(b);
		digits = floor(digits + 1);
        return digits;
    }
public:
    Maha()
    {
        int number,base;
        while(cin>>number>>base)
        {
            cout<<findZeors(number,base)<<" "<<findDigits(number,base)<<nl;
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
