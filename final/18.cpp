#include <bits/stdc++.h>
using namespace std;
int main(){

	double a, b, c;
	cin >> a >> b >> c;

if (b*b - 4 * a * c > 0)
	 cout << 2;
else if (b*b - 4 * a * c == 0)
	 cout << 1;
else cout << 0;


}