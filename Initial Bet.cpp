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
    int n,i,j,t,c,x,ans=0;
    for(i=0;i<5;i++)
    {
        cin>>x;
        ans+=x;

    }
    if(ans!=0 && ans%5==0)
    {
        ans=ans/5;
        cout<<ans<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }

    return 0;
}

/*#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int ara[5],i;
    for(i=0;i<5;i++)
        cin>>ara[i];
    sort(ara,ara+5);
    if(ara[0]==0&&ara[1]==0&&ara[2]==0&&ara[3]==0&&ara[4]==0){
        cout<<-1<<endl;
        return 0;
    }
    int k=0;
    while(ara[0]<=ara[1]<=ara[2]<=ara[3]<=ara[4]){
        ara[0]+=1;
        ara[4]-=1;
        if(ara[0]==ara[4]&&ara[0]==ara[1]&&ara[0]==ara[2]&&ara[0]==ara[3]&&ara[0]){
        cout<<ara[0]<<endl;
        return 0;
        }
        sort(ara,ara+5);
        k++;
        if(k==100000){
            cout<<-1<<endl;
            return 0;
        }
    }
}*/
