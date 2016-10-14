#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int A[55],B[55],n,m,i,j,max=0,t;;
    int g[55][55];
   scanf("%d", &n);
        for(i=0;i<55;i++)
        {
            for(j=0;j<55;j++)
            {
                g[i][j]=0;
            }
        }


        for(i=0;i<n;i++)
        {
            scanf("%d", &A[i]);
        }
        scanf("%d", &m);
        for(i=0;i<m;i++)
        {
           scanf("%d", &B[i]);
        }



        for(i=0;i<n;i++) {
            for(j=0;j<m;j++) {

                if(B[j]%A[i]==0) {
                    t=B[j]/A[i];
                    g[i][j]=t;
                    if(t>=max)
                        max=t;
                }
            }
        }
        int c=0;
        for(i=0;i<n;i++) {
            for(j=0;j<m;j++) {
                if(g[i][j]==max)
                    c++;
            }
        }
        printf("%d\n", c);

    return 0;
}
