#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b){
	while (a != 0 && b != 0){
		if (a > b){
			a = a % b;
		}else b = b % a;
	}return a + b;
}

int main(){

	int a, b;
	cin >> a >> b;

	int lcm = (a * b)/gcd(a, b);

	cout << lcm;

	return 0;
}