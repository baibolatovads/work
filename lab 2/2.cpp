#include <iostream>
#include <cmath>
using namespace std;

int main (){

int R, r, h, v, s, l;
double p;
cin >> R >> r >> h;
p = M_PI;

v = ((p*h)*(R*R + r*r + R*r));
l = sqrt(h*h + (R-r)*(R-r));
s = (p*l)*(R+r)+p*(R*R + r*r);
cout << v << " " << s << endl;

 return 0;
}