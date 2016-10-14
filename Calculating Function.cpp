#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#include <stack>
#include <vector>
#include <queue>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,t,i,j,c=0;
    scanf("%lld",&n);
    if(n%2==0)
    {
        printf("%lld\n",n/2);
    }
    else
    {
        c=(-1)*((n/2)+1);
        printf("%lld\n",c);
    }


    return 0;
}
