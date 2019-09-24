#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	int a, b, c, d, x1, x2, x3, x0, c1;
	cin >> a >> b >> c >> d;
	x3 = -d;
	c1 = c + d;
	int desc = b * b - 4 * a * c1;
	x1 = (-b + sqrt(desc))/ 2 * a;
	x2 = (-b - sqrt(desc))/ 2 * a;
	x0 = -b / 2 * a;
	
	if (desc > 0) cout << x2 << " " << x1 << " ";
	else if (desc == 0) cout << x0 << " ";
	else cout << " ";
	if (x3 != x1 && x3 != x2 && x3 != x0) cout << x3;

return 0;
}
