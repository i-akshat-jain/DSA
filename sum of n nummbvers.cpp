#include <stdio.h> 
  
// Prints numbers from 1 to n 
int printNos(int n) 
{ 
    if(n > 0) 
    { 
        printNos(n - 1); 
        printf("%d ", n); 
    } 
    return 0;
} 
  
// Driver code 
int main() 
{ 
	int t;
	scanf("%d",&t);
	while(t--)
	{
    	int N;
    	scanf("%d", &N);
        printNos(N);
        printf("\n");
    }
return 0; 
} 

