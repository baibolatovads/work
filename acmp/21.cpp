#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main (){
int a, b, c;
cin >> a >> b >> c;
int d = a;
	if (a < b)
	d = b;
	if (d < c)
	d = c;

	if (a > b)
		a = b;
	if (a > c)
		a = c;

	cout << d - a;
return 0;
}
