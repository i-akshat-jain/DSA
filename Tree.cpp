#include <stdio.h>
#include <stdlib.h>
void funB(float n);
void fun(int n)
{	
	
	if (n>100)
	{
		int m = n-10;
		return m;
	}
	else
	{
		fun(fun(n+11));
		return f;
	}
}

int main()
{
	int r;
	r = funA(200);
	printf("%d",r);
	return 0;
}

