#include<iostream>
#include<string>
using namespace std;

int main() 
{
    int T,i,N,j;
    string largest;
    cin >>T;
    for (i = 0; i < T ; i++)
    {
        cin >> N;
        string name[N];
        for(j = 0; j < N; j++)
        {
            cin >> name[j];
        }
        largest = name[0];
        for (j = 0 ; j < N ; j++)
        {
            if ( largest.length() < name[j].length() )
            {
                largest = name[j];
            }
        }
    cout << largest <<"\n";
}
return 0;
}
