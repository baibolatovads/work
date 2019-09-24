#include <iostream>
#include <cmath>
using namespace std;

int main (){

double x, y, z;

cin >> x >> y >> z;

double f = 1 + pow(sin(x+y), 2);
double r = 2 + abs(x - 2*x/(1+pow(x,2)*pow(y,2)));
double a = f/r;

double t = atan(1/z);
double b = pow(cos(t),2);

cout << a << " " << b << endl;

return 0;
}

