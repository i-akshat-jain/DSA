#include <iostream>
#include<unordered_map>
using namespace std;

int findUniqueElement(int arr[], int n, int k)
{
    unordered_map<int, int> umap;
    
    for(int i = 0; i < n; i++)
    {
        umap[arr[i]]++;
    }
    
    for(auto x: umap)
    {
        if(x.second == 1)
        {
            return x.first;
        }
    }
}
int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << findUniqueElement(arr, n, k) << endl;
    }
	return 0;
}
