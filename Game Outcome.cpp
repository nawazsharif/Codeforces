#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include<bits/stdc++.h>

using namespace std;
int main() {
    int n,i,j,r,mx;
    int in[30][30], sr[30], sc[30];
    while(scanf("%d", &n)==1) {
        int R=0, C=0;
        for(i=0;i<n;i++) {
            int s=0;
            for(j=0;j<n;j++) {
                scanf("%d", &in[i][j]);
                s+=in[i][j];
            }
            sr[R++]=s;
        }
        for(i=0;i<n;i++) {
            int s=0;
            for(j=0;j<n;j++) s+=in[j][i];
            sc[C++]=s;
        }
        r=0;
        for(i=0;i<n;i++) {
            for(j=0;j<n;j++) {
                if(sc[j]>sr[i]) r++;
            }
        }
        printf("%d",r);
    }
    return 0;
}
