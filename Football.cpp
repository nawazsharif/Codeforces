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
    int i, c = 1;
    bool no = false;
    char str[110];
    scanf("%s", &str);
    int sz = strlen(str);
    for(i=0; i<sz-1; i++)
    {
        if(str[i]==str[i+1])
        {
            c++;
        }
        else
            c = 1;
        if(c>=7)
        {
            no = true;
            break;
        }
    }
    if(no)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
