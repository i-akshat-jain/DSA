#include <stdio.h>
#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t;
	int search, n, j,i,tmp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n, &search);
		int arr[n];
		for (i = 0; i < n; i++)
			{
			scanf("%d", &arr[i]);
			}
		sort(arr, arr + n, greater<int>());	
		for (i = 0; i < n; i++)
		{
			if (search%arr[i] == 0 && arr[i] <= search)  
			{
            		printf("%d \n", arr[i]);
		    		break;
			} 
		}
		if (i == n)
			printf("-1\n");
	}
return 0;	
}


