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
#define sfi(x)         scanf("%d",&x)
#define take_LL(_x)    scanf(LLId, &_x)
#define FOR(i,a,n)     for(int i=a; i<n; i++)
#define FORE(i,a,n)    for(int i=a; i<=n; i++)
#define REV(i,n,a)     for(int i=n; i>=a; i--)
#define pb             push_back
#define mset(x,n)      memset(x,n,sizeof(x))

typedef long long ll;
typedef unsigned long long ULL;
typedef vector<int> V;
typedef pair<int,int> PII;
typedef vector< PII > VII;

const int              sz  = 1e5+10;
const double           PI  = 2*acos(0.0);
const double           EPS = 1e-9;

/*int temp[sz];
void seive(){
    int i,j;
    for(i=4;i<sz;i+=2){
        temp[i]=1;    }
    FOR(i,3,sz){
        if(temp[i]==0){
            for(j=i*i;j<sz;j+=2*i){
                temp[j]=1;
                //cout << j<< endl;

            }
        }
    }
}*/

int main(){
int n;
double c[1010];
     while(cin >> n && n){
        if(n == 0) break;
        double avg = 0;
        for(int i = 0; i < n; i++) {
            scanf("%lf", &c[i]);
            avg += c[i];
        }
        avg = avg / n;
        double pos = 0, neg = 0;
        for(int i = 0; i < n; i++) {
            double v = (long) ((c[i] - avg) * 100.0) / 100.0;
            if(v > 0) pos += v;
            else neg += v;
        }
        neg = -neg;
        if(neg>pos) printf("$%.2f\n", neg);
        else printf("$%.2f\n", pos);
    }
    return 0;
}
