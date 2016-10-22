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

typedef long long ll;
typedef unsigned long long ull;

/*int main(){
    int n,arr[200],flag=0,m=0;
    cin >> n;
    FOR(i,0,n){
        cin >> arr[i];
    }

    sort(arr,arr+n);
    int p=1;
    FOR(i,0,n){
        if(arr[p]==arr[0]){
            p++;
            m++;
            flag =1;
        }
    }
    if(m==n-1){
        cout << "NO" << endl;
    }
   // if(flag=1){
   else
        cout << arr[p]   << endl;
    //}
    //else
    //{
     //   cout << arr[1] <<"fdn"<< endl;
    //}
}*/
int main()
{
	int i,n;

	int a[1000];
	cin>>n;

    for(i=0;i<n;i++){
        cin>>a[i];
    }
        sort(a,a+n);
        for(i=1;i<n;i++){
            if(a[i]>a[i-1])
            break;
        if(i<n)
            cout<<a[i]<<endl;
        else
            cout<<"NO"<<endl;
    }

	return 0;
}
