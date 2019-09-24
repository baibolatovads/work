#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int F(int a, int b, int c){
	if (a <= 0 || b <= 0 || c <= 0) return 1;
	else if (a > 20 || b > 20 || c > 20) return F(20, 20, 20);
	else if (a < b && b < c) return F(a, b, c - 1) + F(a, b - 1, c - 1) - F(a, b - 1, c);
	return F(a - 1, b, c) + F (a - 1, b - 1, c) + F(a - 1, b, c - 1) - F(a - 1, b - 1, c - 1);
}

int main(){

	int a, b, c;
	cin >> a >> b >> c;
	cout << F(a, b, c);
	return 0;
}