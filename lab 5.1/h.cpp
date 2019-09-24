#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
 
int n;
cin >> n;
int a[n];
 
//n+1 = n;
 
for (int i=0; i < n; ++i){
    cin >>  a[i] ;
}
 
for (int x = 0; x < n-1; x= x+2){
    swap (a[x],a[x+1]);
}
 
for (int i=0; i<n; ++i){
    cout << a[i]<< endl;
}
 
return 0;
}