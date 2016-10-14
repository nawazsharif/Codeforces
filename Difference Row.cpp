#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int a[120];

int main()
{
    int i, n;
    while (scanf("%d", &n) == 1){
        for (i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        sort(a, a+n);
        printf("%d", a[n-1]);
        for (i = 1; i < n-1; i++)
            printf(" %d", a[i]);
        printf(" %d\n", a[0]);
    }
    return 0;
}

