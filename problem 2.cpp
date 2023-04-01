#include <stdio.h>

int main(void) 
{  
	int t;
	int N,K, a[100],i;	
    scanf("%d",&t);
    while(t--)
    { 
    	scanf("%d %d",&N, &K);
		for(i=0;i<N;i++)  
		{
			scanf("%d", &a[i]); 
		}
		for(i=0;i<N;i++)
		{
			if (K%a[i] == 0)   
			{	
				printf(" %d \n", a[i]);
				i++;
			}
			else
			{
				printf("-1");	
			}
		}
	}
return 0;
}
