#include <bits/stdc++.h>
using namespace std;
int main(){

	double a, b, c;
	cin >> a >> b >> c;
	double y, x;

	y = 1/a + 1/b + 1/c;
	x = 1/y;

	printf("%.6f\n", x);

return 0;
}