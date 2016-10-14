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
#define sf(x) cin >> (x)
typedef long long ll ;

int main(){
    ll n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(s[j]=='B'){
                if((j+1)<n && s[j+1]=='G'){
                swap(s[j],s[j+1]);
                j++;
            }
        }
    }
}

    cout << s << endl;

}
