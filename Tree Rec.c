#include <stdio.h>
#include <stdlib.h>
int fun(int n)
{
	int i;
	int sum =0;
	if(n<=1)
	{
		return n;
	}
	else
	{
		return fun(n-2) + fun(n-1);
	}
}

int funit(int n)
{
	int i;
	int sum =0, t0=0, t1=1;
	if(n<=1)
	{
		return n;
	}
	else
	{
		for(i=2; i<=n;i++)
		{
			sum = t0+t1;
			t0=t1;
			t1=sum;
		}
		return sum;
	}
}


int funmem(int n)
{
	int i;
	int sum =0, t0=0, t1=1;
	if(n<=1)
	{
		return n;
	}
	else
	{
		for(i=2; i<=n;i++)
		{
			sum = t0+t1;
			t0=t1;
			t1=sum;
		}
		return sum;
	}
}


int main()
{
	printf("%d\n",funit(6));
	return 0;
}

