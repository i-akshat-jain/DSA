#include <iostream>
using namespace std;
int main() 
{	
	int n, i,j, sum =0;
	int a[100];
	scanf("%d",&n);
	for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
	for(j=0;j<n;j++)
	{
		sum = sum + a[j];
	}
	printf("%d", sum);
	return 0; 
}

/*#include <iostream>
using namespace std;
int main() {
//code
int n;
cin>>n;
int arr[n],i=0,j=0,cnt=0;
while(i<n) 
{ 
cin>>arr[i];
i++;
}
while(j<n) 
{
cnt+=arr[j];
j++;
}
cout<<cnt;
return 0;
}*/










