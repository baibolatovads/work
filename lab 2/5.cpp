#include <iostream>
#include <cmath>
using namespace std;

int main (){

double a, b, c, s;

cin >> a >> b;

c = sqrt(a*a + b*b);
s = (a*b)/2;

cout << "c" << " = " << c << "," << "s" << " = " << s << endl;

return 0;

}