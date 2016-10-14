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
    int n,x,k,a[110],cnt=0,ans=0,temp=0;
    cin >> n>> k>> x;
    FOR(i,0,n){
        cin >> a[i];
    }
    FOR(i,0,n){
        if(a[i]==x && a[i+1]==x){
                int h=i-1;
        int l=i+2;cnt=2;
        while(a[h]==a[l]){
            while(h>=0 && a[h]==a[l]){
                temp++;
                h--;
                }
                while(h<n && a[h+1]==a[l]){
                    temp++;
                    l++;
                }
               /* cout << temp<< endl;
                if(temp >= 3){
					cnt += temp;
				}
				else{
					break;
				}*/
			}
			ans = temp+cnt;

        }

    }
    cout << ans<< endl;
}
