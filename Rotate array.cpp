
/*{
	int t,i,n,d,j;
	scanf("%d",&t);
	while(t--)
		{
			scanf("%d",&n,&d);
			int arr[n];
			printf("\nEnter the elemnts");
			for(i=0;i<n;i++)
			{	
				scanf("%d",&arr[i]);	
			}	
			int temp = 0;
			for (i = 0; i < d; i++) 
			{
				int x = arr[0];
				for (j = 0; j < n-1; j++) 
				{
					temp=arr[j];
					arr[j] = arr[j + 1];
					arr[j+1]=temp;
				}
				arr[n - 1] = x;
			}
			for (i = 0; i < n; i++) 
			{
				printf("\n%d\t",arr[i]);
			}
		}
	return 0;
*/
#include <stdio.h>

int main() 
{
	int t;
	scanf("%d",&t);
while(t--)
{
   	int i, N, len, j;
   	int temp=0;
	scanf("%d %d",&len, &N);
	int arr[len];
	for(i=0;i<len;i++)
	{	
		scanf("%d",&arr[i]);	
	}
   	for (i = 0; i < N; i++) 
   	{
    	int x = arr[0];
    	for(j=0; j<len-1; j++)
    	{
      		/* Move each array element to its left */
      		arr[j] = arr[j + 1];
    	}
    	arr[len - 1] = x;
   	}
   	for (i = 0; i < len; i++) 
   	{
    	printf("%d\t",arr[i]);
   	}
   }
return 0;
}
