#include <iostream>
#include <cmath>

using namespace std;

int main (){

int a, b, n;

cin >> a ; 
cin >> b ;
cin >> n ;


cout << (a * n + ((b*n)/100)) << " " << (b * n)%100 << endl;


return 0;

}