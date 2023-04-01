#include<stdio.h>
#include<conio.h>

void f (int n)
{
	if (n==0)
	return;
	
	f(n-1);
	
	f(n-1);
	printf("%d",n);
}

int main()
{	

	f(4);
}
//	int a = 1025;
//	int *p;
//	p=&a; //&a == address of a
//	printf("Size of integer is %d \n",sizeof(int));
//	printf("Address = %d, value = %d \n",p, *p);
//	
//	Void Pointer - Genric Pointer
//	void *p0;
//	p0 = p;
//	printf("Address = %d\n", p0);

//	int a = 5 ;
//	int *p = &a;
//	*p = 6;
//	int **q = &p;
//	**q = 7;
//	int ***r = &q;
//	printf("%d %d %d %d", a,*p,**q, ***r);
//	printf("\n%d %d %d %d %d", a,*p,*q,*r, **r);
//	***r = 10;
//	printf("\nx = %d", a);
//	**q = *p +2;
//	printf("x = %d", a);
//	p = &b;
//	printf("\n%d %d %d", b,*p,**q);


// Call by reference
//	void Increment(int *a)
//	{
//		*a = *a+1; 
//	}
//	int main()
//	{
//		int b;
//		b= 10;
//		Increment(&b);
//		printf("\nAddress of variable B in increment = %d",b);
//		printf("a = %d",b);
//	}


