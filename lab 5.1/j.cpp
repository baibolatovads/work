#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);
    int n, a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
            cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {
            a[0]=max(a[0], a[i]);
    }
    cout<<a[0];
    return 0;
}