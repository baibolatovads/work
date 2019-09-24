#include <iostream>
#include <cmath>
using namespace std;

int main (){

double x, y, z;
double p = M_PI;

cin >> x >> y >> z;

double f = 2*cos(x - p/6);
double s = 1/2 + sin(y)*sin(y);

double a = f/s;

double k = (z*z)/(3 + (z*z)/5);
double b = 1 + k;

cout << a << " " << b << endl;

return 0;
}