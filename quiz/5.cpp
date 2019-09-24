#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

int main (){

bool i;
int n;
cin >> n  >> i;

 bitset <31> b(n);

//a = x^(1<<i) ;
cout << (i << n);

return 0;
}
