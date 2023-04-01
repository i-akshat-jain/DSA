#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, mul = 1;
	cin >> n;
	for(int i = 1; i <= n; i++)
  	{
  		mul = n*(n-1);
  	}	
  	cout<<mul<<endl;
 	return 0;
}