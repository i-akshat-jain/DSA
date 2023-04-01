#include <iostream>
using namespace std;

int array(int n, int x)
{	
	int i;
	int a[10];
	printf("Enter the array \n"); 
    for(i = 1; i <= n; ++i)
    {
        //a[i] = 10*i;
        scanf("%d",&a[i]);
    }
    printf("%d is the location term",a[x+1]);
}

int main()
{
	int z,q,l;
	printf("Enter for number of integer and location: ");
	scanf("%d %d", &q, &l);
	return array(q,l);
}



/*#include <iostream>
using namespace std;

int array(int n, int x)
{	
	int i;
	int a[10];
	//printf("Enter the array \n"); 
    for(i = 1; i <= n; ++i)
    {
        //a[i] = 10*i;
        scanf("%d",&a[i]);
    }
    printf("%d",a[x+1]);
}

int main()
{
	int z,q,l;
	//printf("Enter for number of integer and location: ");
	scanf("%d %d", &q, &l);
	return array(q,l);
}*/
