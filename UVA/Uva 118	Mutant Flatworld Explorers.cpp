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

int scant[55][55];

class Maha{
    char Dir(char cur_dir, char instruction)
    {
        if(cur_dir=='N' and instruction=='L')
            return 'W';
        if(cur_dir=='N' and instruction=='R')
            return 'E';
        if(cur_dir=='S' and instruction=='L')
            return 'E';
        if(cur_dir=='S' and instruction=='R')
            return 'W';
        if(cur_dir=='E' and instruction=='L')
            return 'N';
        if(cur_dir=='E' and instruction=='R')
            return 'S';
        if(cur_dir=='W' and instruction=='L')
            return 'S';
        if(cur_dir=='W' and instruction=='R')
            return 'N';
    }
    void position(int x, int y, int& pos_x, int& pos_y, bool& k, char direction)
    {
        if(direction=='N')
            pos_y++;
        if(direction=='S')
            pos_y--;
        if(direction=='E')
            pos_x++;
        if(direction=='W')
            pos_x--;
        if(pos_x>x)
        {
            k=1;
            pos_x--;
            if(scant[pos_x][pos_y])
                k=0;
            scant[pos_x][pos_y]=1;
        }
        if(pos_x<0)
        {
            k=1;
            pos_x++;
            if(scant[pos_x][pos_y])
                k=0;
            scant[pos_x][pos_y]=1;
        }
        if(pos_y>y)
        {
            k=1;
            pos_y--;
            if(scant[pos_x][pos_y])
                k=0;
            scant[pos_x][pos_y]=1;
        }
        if(pos_y<0)
        {
            k=1;
            pos_y++;
            if(scant[pos_x][pos_y])
                k=0;
            scant[pos_x][pos_y]=1;
        }
    }
public:
    Maha()
    {
        int x,y,pos_x,pos_y;
        bool k; 
        string s,final_dir="";
        char direction;
        cin>>x>>y;
        scant[55][55]={0};
        while(cin>>pos_x>>pos_y>>direction>>s)
        {
            k=0;
            for(i=0;i<s.size();i++)
            {
                if(s[i]=='L' or s[i]=='R')
                    direction=Dir(direction,s[i]); 
                else
                    position(x,y,pos_x,pos_y,k,direction);
                if(k)
                    break;
            }
            if(k)
                cout<<pos_x<<" "<<pos_y<<" "<<direction<<" LOST\n";
            else
                cout<<pos_x<<" "<<pos_y<<" "<<direction<<nl;
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
