#include <iostream>

using namespace std;


long factorial(int n)
{
    int c;
    long result = 1;

    for( c = 1 ; c <= n ; c++ )
        result = result*c;

    return ( result );
}


long NPR_Function(int n, int r)
{
    long result;

    result = factorial(n)/factorial(n-r);

    return result;
}

int main()
{
    int n, r;
    long ncr, npr;

    cout<<"Enter the value of n and r\n";
    cin>>n>>r;

    npr = NPR_Function(n, r);

    cout<<"\nNPR: ";
    cout<<n<<"  and   "<<r<<"   is  "<<npr<<"\n";

    cin>>n;

    return 0;
}

