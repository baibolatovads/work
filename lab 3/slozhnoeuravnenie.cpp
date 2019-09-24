#include <iostream>
#include <cmath>
using namespace std;

int main (){

int a, b, c, d, x;

cin >> a >> b >> c >> d;

x = (-b)/a;

if ((a==0)&&(b==0)){
	cout << "INF";
}else if ((a==0)||((b%a)!=0)||(c*x+d==0)){
	cout << "NO";
}else {
	cout << x;
}


return 0;
}