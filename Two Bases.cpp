#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main()//(int argc, char **argv)
{
    int n1,n2,y1,y2;
    scanf("%d %d",&n1 ,&y1);
    vector<int> v1(n1);
    long long int b=0;
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&v1[i]);
    }
    for(int i=0;i<n1;i++)
    {
        b=b*y1+v1[i];
    }
    scanf("%d %d",&n2 ,&y2);

    vector <int> v2(n2);
    long long int c=0;
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&v2[i]);
    }
    for(int i=0;i<n2;i++)
    {
        c=c*y2+v2[i];
    }
    if(b > c)
        cout << ">" << endl;
    else if(b < c)
        cout << "<" << endl;
    else
        cout << "=" << endl;

    return 0;
}
