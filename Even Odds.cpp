#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
    long long n, k;
    while(scanf("%lld %lld",&n,&k)==2)
    {

        long long j = 1 + (k - 1) * 2;
        if( j > n ){
                j -= n;
            if( n % 2 == 1 ){
            }
            else{
                j -= n - 1;
            }
        }
        printf("%lld\n",j);
    }
    return 0;
}
