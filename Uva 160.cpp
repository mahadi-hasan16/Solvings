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
    int i,j,k,l,h,d,count;
    int factorial[101][101]={0};
public:
    void copy(int p)
    {
        for(i=0;i<101;i++)
            factorial[p][i]=factorial[p-1][i];
    }
    void factorize(int m)
    {
        copy(m);
        int n=m;
        for(j=2;j*j<=n and n!=1;j++)
        {
            while(n%j==0)
            {
                n/=j;
                ++factorial[m][j];
            }  
        }
        if(n>1)
            ++factorial[m][n];
    }
    Solve()
    {
        for(k=2;k<=100;k++)
            factorize(k);
    }
    void task(int n)
    {
        count=0;
        cout << setw(3) << n << "! =";
        for(l=0;l<=100;l++)
        {
            if(factorial[n][l])
            {
                if(count==15)
                {
                    cout<<nl<<"      ";
                    count=0;
                }
                count++;
                cout<<setw(3)<<factorial[n][l];
            }
        }
        cout<<nl;
        return;
    }
};

signed main()
{
    //ios::sync_with_stdio(0);
   //cin.tie(0);
   //cout.tie(0);
    Solve maha;
    int input;
    {
        while(cin>>input and input!=0)
            maha.task(input);
    }
    return 0;
}
