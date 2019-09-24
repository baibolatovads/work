#include <iostream>

using namespace std;

int main (){

int n, a, b;

cin >> n;

a = ( n/60 ) % 24;
b = n % 60;

cout  << a << " " << b << endl;

return 0;

}