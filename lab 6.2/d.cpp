#include <iostream>
using namespace std;
int main()
{

    int n, k, m=0;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
            cin>>x[i];
    }

    cin>>k;

    for(int i=0;i<n;i++){
    	if (k==x[i])
            cout << i+1 << " ";
            
    }
    
return 0;
}