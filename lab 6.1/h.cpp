#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);
    int n, a[100], r;
    cin>>n;
    for(int i=0;i<n;i++)
    {
            cin>>a[i];
    }
    r=n%2;
    for(int i=0; i<n-r; i+=2){
        swap(a[i], a[i+1]);
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}