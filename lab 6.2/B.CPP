#include <bits/stdc++.h>
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
    	if (k==x[i]){
            m=1;
            break;
        }
    }if(m==1) cout << "YES";
    else cout << "NO";
return 0;
}