#include <iostream>
#include <cmath>
using namespace std;

int main (){
double a, b, c, m1, m2, m3;

cin >> a >> b >> c;


m1 = 0.5 * sqrt(2 * (b*b + c*c) - a*a);
m2 = 0.5 * sqrt(2 * (a*a + c*c) - b*b);
m3 = 0.5 * sqrt(2 * (a*a + b*b) - c*c);

printf("%.2f\n",m1);
printf("%.2f\n",m2);
printf("%.2f\n",m3);


return 0;
}