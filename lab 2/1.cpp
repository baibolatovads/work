#include <iostream>
#include <cmath>
using namespace std;

int main (){

int a, b, c, h, v, s, p;

cin >> a >> b >> c >> h;
p = (a + b + c)/2;
s = sqrt( p * ((p-a)*(p-b)*(p-c)));

v = (s*h)/3;

cout << v << endl;
 return 0;
}