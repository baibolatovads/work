#include <iostream>
#include <cmath>
using namespace std;

int main (){

int a, b, c;



cin >> a >> b >> c;

if ((a==b && b!=c && a!=c) || (b==c && a!=c && a!=b) || (a==c && a!=b && b!=c)){
	cout << 2;
}else if ((a==b) && (b==c)) {
	cout << 3;
}else {
	cout << 0;
}
return 0;
}