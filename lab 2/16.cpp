#include <iostream>
#include <cmath>
using namespace std;

int main (){

double x1, x2, y1, y2, l;

cin >> x1 >> y1 >> x2 >> y2;

l = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

printf("%.2f\n",l);

return 0;
}
