/*#include <stdio.h>
#include <stdlib.h>
int main(void) 
{   
	int p , i ;
	scanf("%d",&p);
	for (i=0;i<=p;i++)
		{
	        p = p/2;
	        printf("%d", p);
	    }
	return 0;
}*/

#include <stdio.h>
#include <stdlib.h>


int main() 
{
    int T,i;
    scanf("%d",&T);
    for (i = 0; i < T ; i++)
    {
         int h,p;
        scanf("%d %d",&h,&p);
        if(p!=0)
    		{
    	        h = h-p;
    	        p = p/2;
    	        return h;
    	    }
    	 else
    	    {
    	        return 0;       
    	    }

		}
return 0;
}
