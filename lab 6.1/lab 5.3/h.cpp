#include <iostream>
 
using namespace std;
 
int main()
{
    int x, mx1, mx2;
    cin>>mx1>>mx2;
    if(mx1<mx2)swap(mx1, mx2);
    while(cin>>x)
    {
        if(x==0)break;
        if(x>=mx1)
        {
            mx2=mx1;
            mx1=x;
        }
        else if(x>mx2)mx2=x;
    }
    cout<<mx2;
}
 return 0;
}