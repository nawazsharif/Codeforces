#include <bits/stdc++.h>

using namespace std;
#define R(f)           freopen( (f), "r", stdin )
#define W(f)           freopen( (f), "w", stdout )
#define pf             printf
#define sf             scanf
#define pfi(x)         printf("%d\n",x)
#define pfs()          printf(" ")
#define pfl()          println("\n")
#define sfd(x)         scanf("%lf",&x)
#define sfi(x)         scanf("%d\n",&x)
#define take_LL(_x)    scanf(LLId, &_x)
#define FOR(i,a,n)     for(int i=a; i<n; i++)
#define FORE(i,a,n)    for(int i=a; i<=n; i++)
#define REV(i,n,a)     for(int i=n; i>=a; i--)
#define pb             push_back
#define mset(x,n)      memset(x,n,sizeof(x))

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> V;
typedef pair<int,int> PII;
typedef vector< PII > VII;

const int              SZ  = 1e5+10;
const double           PI  = 2*acos(0.0);
const double           EPS = 1e-9;

int main(){
    //R("input.txt");
    //W("output.txt");
    int arr[SZ];
    int n,cnt=1,t;
    sfi(n);
    //cout << n << endl;
    for(int j=0;j<n;j++){
          cin >> arr[j];
    }

    for(int i=1;i<n;i++){

         if(arr[i]!=arr[i-1]){
               //cout << i<< endl;
               cnt++;
         }
    }
    cout << cnt << endl;



    return 0;
}
