#include <stdio.h>
#define MAX 100
int main()
{
    int n,i;
    int num,count,t;
    scanf("%d",&t);
    while(t--)
    {
	    scanf("%d %d",&n,&num);
	    int arr[n];
	    //read array elements
	    for(i=0;i< n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    //count occurance of num
	    count=0;
	    for(i=0;i< n;i++)
	    {
	        if(arr[i]==num)
	            count++;
		}
		if (count == 0)
	        {
	        	printf("-1");
			}
	    else
			printf("%d\n",count);
			
	}
	return 0;
}
