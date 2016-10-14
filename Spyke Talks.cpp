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
    int n,arr[100010],c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);

    for(int i=0;i<n-1;i++){
    if(arr[i]!=0){
        if(arr[i]==arr[i+1])
            c++;
        if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2]){
            c=-1;
            break;
        }
    }
    }
    printf("%d",c);

    return 0;
}
