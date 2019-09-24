#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, k, m=0, l = -1;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
            cin>>x[i];
    }

    for(int i=1;i<n;i++){
        if (x[i]>0){
        m = max (m, x[i]);
        m = x[i];
       } else if (x[i]<0){
        l = max (l, x [i]); 
        l = x[i]; 
        } if (m==x[i]||l==x[i]) 
        cout << i << " ";
    }
return 0; 
}