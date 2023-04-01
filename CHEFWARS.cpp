#include <stdio.h>

int main(void) 
{   
    int t;
    scanf("%d",&t);
    while(t--)
    {	
        int h,p;
        scanf("%d%d",&h,&p);
        while (p>0)
			{
    	        h = h-p;
    	        p = p/2;
    		}
    	if(h<=0) 
    	{
	    	printf("1");     
    	}
    	else 
    	{
    		printf("0");
    	}

    }
   	printf("\n");
    return 0;
}




#include <stdio.h>

int main(void) 
{  
int t;
    scanf("%d",&t);
    while(t--)
    { 
   	
    int N,K, a[100],i,j,n, sum = 0;
    int mul[10];
    scanf("%d %d ",&N, &K);
		for(int i=0; i <= N; i++)   // loop for taking input
		{
			scanf("%d", &a[i]);  
			while(i--)
 			{
    			if (K/a[i]==0)    /* If required element is found */
    			{
      				printf(" %d.\n", a[i]);
       				break;
       			}
       			else
       			{
       				printf("-1");	
				}
    		}
		}
	}	
return 0;
}
/*
#include <stdio.h>

int main()
{
  int array[100], search, c, n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)     If required element is found 
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the array.\n", search);

  return 0;
}*/







/*for(j=1;j<=n;j++)
    		{
    			mul[j] = j*n;
				if(mul[j] != K) 
    			{	
					printf("-1");
				   
    			}
   			}
   			
   			
   			
   			*/
