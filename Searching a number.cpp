/*#include <stdio.h>
 
int main()
 
{
    int search, n, i,t;
    scanf("%d",&t);
    while(t--)
    {
	    scanf("%d %d",&n, &search);
		int arr[n];
		
		for (i = 0; i < n; i++)
			scanf("%d", &arr[i]);
		for (i = 0; i < n; i++)
		{
			if (arr[i] == search)  
			{
	 			printf("%d\n",i+1);
				break;
			}
		}
	 	if (i == n)
			printf("-1");
	}
   return 0;
}*/

//code
#include <stdio.h>
//#include <iostream>
using namespace std;

int main()
{

	int t,n,k,op,temp;
	cin>>t;
	while(t--)
	{
		op=-1;
		int c=0;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++)
		{ 
			cin>>temp;
			if(temp==k && c==0)
			{
				op=i+1;
				c++;
			}
		
		}
	cout<<op<<endl; 
	}
	return 0;
}
