#include <iostream>
using namespace std;

int main() 
{
	int t;

	scanf("%d",&t);
	while(t--)
	{
		int countC = 0, countR = 0;
		int C,R,i,sumR,sumC;
		scanf("%d %d",&C ,&R);
		
		countC = C / 9;
		countR = R / 9;
		if ( countC * 9 != C)
		{
			countC = countC + 1;;
		}
		if( countR * 9 != R)
		{
			countR = countR + 1;
		}
		
		if (countC == countR || countR < countC)  
		{
				printf("1  %d\n",countR);
		}
		else
		{
			printf("0  %d\n",countC);
		}
	}
	return 0;
}

