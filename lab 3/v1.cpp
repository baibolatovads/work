#include <iostream>
#include <cmath>
using namespace std;

int main (){
	double a, b, c;
	cin >> a >> b >>c;

double d, x1, x2;
	
	d = b*b - 4*a*c;
	if (d>=0){
		x1 = ((-b + sqrt (d))/2*a);

		cout << x1;
	}else if (d>0){
	x2 = ((-b - sqrt (d))/2*a);

	cout << x2;
	}

	return 0;
}