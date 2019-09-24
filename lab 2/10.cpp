#include <iostream>
#include <cmath>
using namespace std;

int main (){

int a, b, c, r, p;

cin >> a >> c;

b = sqrt(c*c - a*a);

p = (a + b + c)/2;

r = sqrt(((p-a)*(p-b)*(p-c))/p);

cout << b << " " << r << endl;

return 0;
}