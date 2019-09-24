#include <iostream>
#include <cmath>
 
using namespace std;
int main() {
 
    int n, i;

    n>=2;
 
cin >> n;
 
 for (i=2; i<=n; i++){
    if(n%i==0) 
    break;
}cout << i << endl;
 
return 0;
}
