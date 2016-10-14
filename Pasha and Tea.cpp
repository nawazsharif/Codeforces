#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <map>
#include <stack>
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <list>
#include <iterator>
#include <fstream>
#include<bits/stdc++.h>

using namespace std;


#define INP(f) freopen(f, "r", stdin)
#define OUP(f) freopen(f, "w", stdout)
const double PI = acos(-1);
#define sq(x) ((x)*(x))
#define mset(x,n) memset((x),(n),sizeof((x)))
#define REP(i,n) for( int i=0,_e(n); i<_e; i++ )
#define FOR(i,a,b) for( int i=(a),_e(b); i<_e; i++ )
#define op(x) cout << (x) << endl
#define in(x) cin >> (x)
#define sfi(x) scanf("%d",&x)
#include<map>
#define inf 0x3f3f3f3f
using namespace std ;
typedef long long ll ;
#define MAX  100005

int a[MAX*2];


int main()
{
    int n,m;
    double ans=0.0;
    cin>>n>>m ;
    for(int i=0;i<n*2;i++)
    {
        scanf("%d",&a[i]);
       // sum=sum+a[i];
    }

    sort(a,a+2*n);

    double p=a[0];

    double q=a[n];

    double mid=min(p,(q/2));
    ans=(mid*3*n);

if(ans<m)
{

   printf("%.7lf",ans);
}
else
{
    printf("%.7lf",m*1.0);
}

    return 0 ;
}

