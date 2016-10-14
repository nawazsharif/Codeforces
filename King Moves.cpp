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
#define sz 100000


int main(){
    int arr[5],a,b;
    string str;
    cin >> str;
    //cout << str[0] <<" "<< str[1]<< endl;
    if(str[0]=='a' || str[0]=='h'){
        if(str[1]=='1' || str[1]=='8'){
            cout << "3"<< endl;
        }
        else{
            cout << "5" << endl;
        }
    }
    else if(str[0]!='a' || str[0]!='h'){
        if(str[1]=='1' || str[1]=='8'){
            cout << "5" << endl;
        }
        else
            cout << "8"<< endl;
    }


    return 0;
}
