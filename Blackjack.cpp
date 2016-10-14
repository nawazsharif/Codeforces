#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    if (n <= 10)
        printf("0");
    else if (n == 20)
        printf("15");
    else if (n >= 22)
        printf("0");
    else
        printf("4");

    return 0;
}
