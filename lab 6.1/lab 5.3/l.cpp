#include <iostream>
 
using namespace std;
 
int main()
{
    int n, x, prev, c1=1, c2=1, mx=1;
    cin>>prev;
    while(cin>>x && x!=0)
    {
        if(x>prev)c1++;
        else c1=1;
 
        if(x<prev)c2++;
        else c2=1;
        mx=max(mx, c1);
        mx=max(mx, c2);
        prev=x;
    }
    cout<<mx;
return 0;
}