#include <iostream>
#include <cmath>
using namespace std;

int main (){

double a, b, c;

cin >> a >> b >> c;

if (c==0 && b!=0){
	cout << (-b)/a;
}else if (c!=0 && b!=0) {
	cout << (-b - sqrt(b*b - 4*a*c)) << endl;
	cout << (-b + sqrt(b*b + 4*a*c)) << endl;
}else if(c!=0 && b==0){
	cout << sqrt(-c/a);
}else if (c==0 && b==0){
	cout << 0;
}
else{
	cout << " ";
}
return 0;
}