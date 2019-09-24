#include <iostream>
#include <cmath>
using namespace std;

int main (){

double a, p, s;
cin >> a;

p = (3*a)/2;
s = sqrt(p * (p-a)*(p-a)*(p-a));
cout << s << endl;

return 0;
}