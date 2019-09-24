#include <iostream>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    int n, x[1010], i, a, b, c, d;
    cin>>n>>a>>b>>c>>d;
    for(i=1;i<=n;i++)
    {
            x[i]=i;
    }
    reverse(x+a, x+b+1);
    reverse(x+c, x+d+1);
    for(i=1; i<=n; i++)
    {
        cout<<x[i]<<" ";
    }
    return 0;
}