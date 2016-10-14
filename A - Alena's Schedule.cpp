#include <iostream>
#include <stdio.h>
#include <algorithm>


using namespace std;

int a[110];

int main()
{
	int n, num = 0, x = 0, y = 0, z = 0;
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i = 0; i < n; i++)
	{
	    a[-1]=2;

		if(a[i] == 1)
		{
		   // cout << i << endl;
			num = num + 1;
			x = 1;
			if(y == 1)
            num = num + 1;
            y = 0;

		}
		  else if(a[i] == 0 && x == 1)
          {
              //num = num + 1;
              y = y + 1;
              //cout << i << endl;
          }
         // else if(a[i] == 0 && a[i-1] == 0)
        //  {
          //    num-=2;
             //cout << i << endl;
          //}


	}
	cout << num << endl;
	return 0;
}
