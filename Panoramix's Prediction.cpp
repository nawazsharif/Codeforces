#include<iostream>
#include <stdio.h>
#include<cmath>
#define size 20000000
using namespace std;

bool IsPrime(int number)
{
	int i;
	for (i=2; i<number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}

	return true;
}



int NextPrime(int a)
{

    while (!IsPrime(++a))
    {

    }
    return a;

}

int main()
{

    int a , b ;
    cin >> a >> b ;

    int result = NextPrime(a);
    if(result == b ) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
