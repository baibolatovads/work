#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int x[n];
    int max = x [0];
    
    for(int i=0;i<n;i++)
    {
            cin>>x[i];
    }

    for(int i=0;i<n;i++){
            if (x[i] > max){
                max = x [i];
            }
    } cout << max ;
      
  
return 0;
}