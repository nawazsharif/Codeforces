#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <map>
#include <set>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <string.h>
#include <sstream>
#include <fstream>
#include <algorithm>

using namespace std;

#define iDeBug 1

#define D(x) if(iDeBug) cout << __LINE__ << " " << #x" = " << (x) << endl
#define D2(x,y) if(iDeBug) cout << __LINE__ << " " << #x" = " << (x) \
			   << ", " << #y" = " << (y) << endl
#define READ(f) freopen( (f), "r", stdin )
#define WRITE(f) freopen( (f), "w", stdout )
#define mset(x,n) memset((x),(n),sizeof((x)))
#define pf(x) cout << (x)
#define pfl(x) cout << (x) << endl
#define pfnl() cout << endl
#define pfs() cout << " "
#define FOR(i,a,b) for(int i=(a); i<b; i++)
#define FORE(i,a,b) for(int i=(a);i<=b;i++)
#define REV(i,a,b) for(int i=(a); i>=b; i--)

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> V;

int main(){
    LL a,b,x,c,n=0,r=0,y,z,v=0,u=0,m,q,t=0,i,ans1=0,ans2=0;

    cin>>a>>b;
    c=a+b;
    while(a!=0||b!=0)
    {
        x=a%10;
        a=a/10;
        if(x!=0)
        {
            n=n*10+x;
        }
//######################################
        z=b%10;
        b=b/10;
        if(z!=0)
        {
            v=v*10+z;
        }
    }
    while(n!=0||v!=0)
    {
        if(n!=0)
        {
         y=n%10;
         n=n/10;
         r=r*10+y;
        }

//######################################

        if(v!=0)
        {
        m=v%10;
        v=v/10;
        u=u*10+m;
        }
    }

    while(c!=0)
    {
         q=c%10;
        c=c/10;
        if(q!=0)
        {
        t=t*10+q;
        }
    }

    while(t!=0)
    {
        i=t%10;
        t=t/10;
        ans1=ans1*10+i;
    }

    ans2=r+u;
    if(ans1==ans2)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
