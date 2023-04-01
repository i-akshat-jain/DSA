#include <stdio.h>
    
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
      second  = a[1];
    } 
	else 
	{
      largest = a[1];
      second  = a[0];
    }
    
    for(i = 2; i < n; i++) 
    {
        if( largest < a[i] ) 
        {
         second = largest;
         largest = a[i];
        } 
        else if( second < a[i] ) 
        {
         second =  a[i];
        }
    }
    
    printf("\n %d \n", second);   
    
return 0;
}
    

