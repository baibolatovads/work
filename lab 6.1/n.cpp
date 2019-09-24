#include <iostream>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    int n, x[100010], k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
            cin>>x[i];
    }
    cin>>k;
    if(k>=0)
    {
        k%=n;
    }
    else
    {
        k=abs(k)%n;
        k=n-k;
    }
    for(int i=n-k; i<n; i++)
    {
        cout<<x[i]<<" ";
    }
 
    for(int i=0; i<n-k; i++)
    {
        cout<<x[i]<<" ";
    }
    return 0;
}