#include <iostream>
using namespace std;
int main() {
 

    int n, x, prev, c=0, mx=1;
    cin>>prev;
    while(cin>>x && x!=0)
    {
        if(x==prev)c++;
        else c=1;
        mx=max(mx, c);
        prev=x;
    }
    cout<<mx;

return 0;
}
