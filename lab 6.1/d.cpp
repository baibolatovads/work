#include <iostream>
using namespace std;
int main() {
 
int n, prev, k=0;
cin >> n >> prev;
int a[n];
 
for (int i=1; i < n; i++){
    cin >>  a[i] ;
    if (a[i]>prev)k++;
    	a[i] = prev;
     
    	
}cout << k << " ";



return 0;
	}