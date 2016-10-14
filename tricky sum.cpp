#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

long long ans,n,t;

int main(){

    cin>>t;
    while(t--){
        cin>>n;
        ans=(n*(n+1))/2;
        for(long long i=1;i<=n;i*=2)
        {
            ans=ans-(i+i);
        }

        cout<<ans<<"\n";
    }
}
