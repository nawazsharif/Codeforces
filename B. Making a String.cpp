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
#define inpFile(f) freopen(f, "r", stdin)
#define outFile(f) freopen(f, "w", stdout)
const double PI = acos(-1);
#define REP(i,n) for( int i=0,_e(n); i<_e; i++ )
#define FOR(i,a,b) for( int i=(a);i<=(b); i++ )
#define pf(x) cout << (x)
#define sf(x) cin >> (x)
typedef long long LL;

LL arr[30];
int main()
{   LL n,i,ans=0;
    cin>>n;
	for(i=0;i<n;i++){
            cin>>arr[i];
	}
	sort(arr,arr+n);
	for(i=n-2;i>=0;i--)
        while(arr[i]>=arr[i+1]&&arr[i]){
            arr[i]--;
        }

	for(i=0;i<n;i++){
            ans+=arr[i];
	}

	cout<<ans;
	return 0;
}
