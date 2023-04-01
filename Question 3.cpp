#include <iostream>
using namespace std;

int main() 
{
	int t;

	scanf("%d",&t);
	while(t--)
	{
		int countC = 0, countR = 0;
		int C,R,i,c,r;
		scanf("%d %d",&C ,&R);
		
		if (C > 0)
	        c = C/10;
	        c=c-9;
	        countC++;
        
        if (R == 0)
	        r = R/10;
	        r = r-9;
			countR += 1;
        
		printf("%d %d",countC,countR);
		
		/*if (countC == countR || countR < countC)  
		{
				printf("1  %d\n",countR);
		}
		else
		{
			printf("0  %d\n",countC);
		}*/
	}
	return 0;
}

