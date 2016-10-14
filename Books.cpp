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

#define sq(x) ((x)*(x))
#define mset(x,n) memset((x),(n),sizeof((x)))
#define INP(f) freopen(f, "r", stdin)
#define OUP(f) freopen(f, "w", stdout)
const double PI = acos(-1);
#define REP(i,n) for( int i=0,_e(n); i<_e; i++ )
#define FOR(i,a,b) for( int i=a; i<b; i++ )
#define pf(x) cout << (x)
#define sf(x) cin >> (x)

/*int arr[100000];
int main()
{
    long long n,t,i,ans=0,c=0,p=0;
    sf(n);
    sf(t);
    FOR(i,0,n){
        sf(arr[i]);
    }
    sort(arr,arr+n);
    ans=arr[0];

    FOR(i,0,n){

        if(ans<=t&& p<n ){
                //cout <<"gf" << endl;
                c++;
                p++;
        //cout << p<<" "<< t  << endl;
                if(p==n){
                    cout << c << endl;
                }
                ans+=arr[i+1];

              //  cout << ans << endl;
            }
            //cout << ans << endl;
        else {
            pf(c);
            break;
        }
       //cout << c << endl;
    }


    return 0;
}*/

int main()
{
	int i,j,k,n,t,ans,cnt;
	long long int val,arr[100001];
	cin >> n >> t;
	for(i=0;i<n;i++)
		cin >> arr[i];
	ans=-1;
	i=j=val=0;
	while(i<n)
	{
		while(j<n && val+arr[j]<=t)
		{
			val+=arr[j];
			j++;
		}
		ans=max(ans,j-i);
		val-=arr[i];
		i++;
	}
	cout << ans << endl;
	return 0;
}
