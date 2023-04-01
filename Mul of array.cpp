#include <stdio.h>

int main() 
{	
	int n, i,j, mul=1;
	int a[100];
	scanf("%d",&n);
	for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
	for(i=1;i<n;i++)
	{
		mul=mul*a[i];
	}
	printf("%d", mul);
	return 0; 
}

