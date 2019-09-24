#include <iostream>
#include <cmath>
using namespace std;

int main (){

double x;

cin >> x;


int a = ((x - floor(x))*100)/10;
cout << a;

return 0;
}
