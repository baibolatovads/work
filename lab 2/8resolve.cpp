#include <iostream>
#include <cmath>
using namespace std;

int main (){

double r1, r2, r3, r0, c;

cin >> r1 >> r2 >> r3;

c = 1/r1 + 1/r2 + 1/r3;

r0 = c * (-1);
cout << r0 << endl;
return 0;
}