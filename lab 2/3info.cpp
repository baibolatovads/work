#include <iostream>
#include <cmath>
using namespace std;

int main (){

int p, x, y;
cin >> p >> x >> y;
cout << ((x*100 + y)*p/100 + (100*x+y))/100 << " " << (((100*x+y)*p/100) + (100*x+y))%100;
 return 0;
}