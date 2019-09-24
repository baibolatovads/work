#include <iostream>
#include <cmath>
using namespace std;

int main (){

double a, b, c, d;

cin >> a >> b >> c >> d;

int dac = c - a;
int dbd = d - b;

if (dbd < 0){ 
dbd+= 100;
dac = dbd - 1;
} cout << dac << " " << dbd;

return 0;
}