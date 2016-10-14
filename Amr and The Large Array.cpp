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
#define FOR(i,a,b) for( int i=(a),_e(b); i<_e; i++ )
#define pf(x) cout << (x)
#define MX 1000010


int cnt[MX], a[MX], cntl[MX], cntr[MX];
int main()
{
	int n, i, mx, mxi, l, r, ans=MX, mxl, mxr;
      scanf("%d", &n);
      mx=0;
          FOR(i,0,n){
              cin >>a[i];
              cnt[a[i]]++;
                  if(cnt[a[i]]>mx)
                  {
                      mx=cnt[a[i]];
                  }
              if(cntl[a[i]]==0){
                cntl[a[i]]=i+1;
              }
              cntr[a[i]]=i+1;


          }
                  FOR(i,0,n){
                     if(cnt[a[i]]==mx){
                             if(cntr[a[i]]-cntl[a[i]]+1<ans){
                                ans=cntr[a[i]]-cntl[a[i]]+1;
                                mxl=cntl[a[i]];
                                mxr=cntr[a[i]];
                             }
                     }
                  }
                      printf("%d %d\n", mxl, mxr);
      return 0;
}
