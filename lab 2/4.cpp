#include <iostream>
#include <cmath>
using namespace std;

int main (){

double a, b, k, g;

cin >> a >> b;

k = (a + b)/2;
g = sqrt(a*b);
 cout << "arithmetic mean" << " = "<< k << "," << "geometric mean" << " = " << g << endl;

 return 0;
}