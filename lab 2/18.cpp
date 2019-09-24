#include <iostream>
#include <cmath>
using namespace std;

int main (){

double x, y, z;

cin >> x >> y >> z;

double k = x+y/(x*x+4);
double m = 1+y;
double s = exp(-x-2) + 1/(x*x+4);

double a = (k/s)*m;

double u = 1 + cos(y-2);
double l = (pow(x,4))/2 + pow(sin(z),2);

double b = u/l;

cout << "a" << " = " << a << " " << "b" << " = " << b << endl;

return 0;
}