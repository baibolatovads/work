#include <bits/stdc++.h>
using namespace std;

int main(){

	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	double a = (x2 - x1)*(x2 - x1);
	double b = (y2 - y1)*(y2 - y1);

	double d = sqrt(a + b);

	printf("%.5f\n",d);

return 0;
}