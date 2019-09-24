#include <iostream>

using namespace std;
int main (){

int a, b, c, d;

cin >> a;
b = a % 10;
c = (a % 100-b) / 10;
d = a/100;

cout << c << endl;

return 0;

}