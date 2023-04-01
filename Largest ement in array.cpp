/*#include <stdio.h>
    
int main() 
{
int a[10];
int i, n,largest, second;
    scanf("%d", &n);
    for(i=0 ; i<n ; i++)
    {
    	scanf("%d", &a[i]);
    }
	if(a[0] > a[1]) 
	{
      largest = a[0];
    } 

    for(i = 2; i < n; i++) 
    {
        if( largest < a[i] ) 
        {
         second = largest;
         largest = a[i];
        } 
    }
    printf("\n largest - %d \n", largest);   
return 0;
}
    */

#include<stdio.h>

int main()
 {
	//code
	int i,j,t,arr[100];
	int n,a;
	scanf("%d",&n);
	while(t--)
	{
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	        
	    }
	      for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (arr[i] > arr[j]) 
                {
 
                    a =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
 
                }
 
            }
 
        }
        printf("%d \n",arr[n-2]);
	}
	return 0;
}
