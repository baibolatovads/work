#include <iostream>
#include <cmath>
using namespace std;

int main (){

int x, y, z;

cin >> x >> y >> z;

double x1 = sqrt(abs(x-1)) - sqrt(pow(abs(y),1/3));

double x2 = 1 + (x*x)/2 + (y*y)/4;

double a = x1/x2;

double b = x*(atan(z) + exp(-(x+3)));

cout << a << " " << b << endl;

return 0;
} 
