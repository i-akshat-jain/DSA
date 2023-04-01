#include <stdio.h>
#include <stdlib.h>
int toh(int n, int A, int B, int C)
{
	if(n>0)
	{
		toh(n-1,A,C,B);
		printf("Shift is from %d to %d\n",A,C);
		toh(n-1,B,A,C);
	}
}

int main()
{
	printf("%d\n",toh(3,1,2,3));
	return 0;
}

