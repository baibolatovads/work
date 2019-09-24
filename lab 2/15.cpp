#include <iostream>
#include <cmath>
using namespace std;

int main (){

double a, b, c, l1, l2, l3;

cin >> a >> b >> c;

double a1 = sqrt((b*c)*((b+c)*(b+c) - a*a));
l1 = a1/(b+c);

double a2 = sqrt((a*b)*((a+b)*(a+b) - c*c));
l2 = a2/(a+b);

double a3 = sqrt((a*c)*((a+c)*(a+c) - b*b));
l3 = a3/(a+c);

printf("%.2f\n", l1);
printf("%.2f\n", l2);
printf("%.2f\n", l3);
//cout << l1 << " " << l2 << " " << l3 << endl;


return 0;
}