#include <iostream>
using namespace std;
int main()
{
    
    int n, a[100], c=0, x, i;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
            cin>>a[i];
    }
    cin>>x;
    for(i=0;i<n;i++)
    {
            if(x>a[i])break;
    }
    cout<<i+1;
    return 0;
}
 