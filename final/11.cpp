#include <bits/stdc++.h>
using namespace std;
int main(){

	double a, b, c;
	double s, h, p = M_PI;
	cin >> a >> b >> c;

	h = ((a - b)/2) * tan(p * c / 180);
	s = (a + b)/2 * h;
	cout << s;

return 0;
}