#include<stdio.h>  

int main()
{   int t;
    scanf("%d",t);
    while(t--)
    {
    	int n,d,temp = n;
    	scanf("%d",n);
    	int a[n];
    	for(int i = 0 ; i <= n ; i++)
    	{
    		if (n%10!=0)
    		{
    			d == temp%10;
				temp = temp/10;
    			if (d == 2 || d == 3 || d == 5 || d == 7) 
            	{
		    		printf("%d",a[i]);
		    		break;
				}	 
			}
		
		}

    	
	//	printf("%d",arr[i]); 
	}
    return 0;  
}
