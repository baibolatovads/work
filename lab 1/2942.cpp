#include <iostream>

using namespace std;
int main (){

int a, m, n;

cin >> a;

n = a % 10;
m = ( a % 100 - n ) / 10;

cout << m << endl;

return 0;

}