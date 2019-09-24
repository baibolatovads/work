#include <iostream>
#include <cmath>
using namespace std;

int main (){

double a, b, c;

cin >> a >> b >> c;

if (a*a + b*b == c*c){
	cout <<"right";
}else if (a*a + b*b > c*c){
	cout << "acute";
}else if (a*a+ b*b < c*c){
	cout << "obtuse";
}else {
	cout << "impossible";
}
return 0;
}