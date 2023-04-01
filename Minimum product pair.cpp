#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() 
{
    int t;
    int lowestmul = 0;
    scanf("%d",&t);
    while(t--)
    {
        int i,n;
        scanf("%d",&n);
		int arr[n];
		for (i = 0; i < n; i++)
			{
			scanf("%d", &arr[i]);
			}
	    sort(arr, arr+n);
		lowestmul = arr[0]*arr[1];
	    
		printf("%d",lowestmul);
	}
	return 0;
}
