#include <bits/stdc++.h>
using namespace std;
int main(){

	double a, b, c;
	cin >> a >> b >> c;
	int x = c/((a+b)*24);

	double y = ceil((c/(a + b)) - (x*24));
	cout << x << 'd' << " " << y << 'h';

	return 0;
}