#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int x,y,a,b;
    scanf("%d%d%d%d",&x,&y,&a,&b);
    int c=0;
    for (int i=a;i<=x;++i)
    {
        int m=min(i-1, y);

        if (b<=m)
        {
            c +=(m-b+1);

        }

    }
   cout << c << endl;

    for (int i=a;i<=x;++i)
    {
        int m=min(i-1,y);

        for (int j=b;j<=m;j++)
        {
            cout << i << " " << j << endl;
        }
    }
    return 0;
}
